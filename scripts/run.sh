#!/bin/zsh
startMsg='Job started on '`date`
echo $startMsg
#HOME=/afs/cern.ch/user/m/mpitt

if [ ! $# -eq 3 ]; then
    echo "ERROR: No argument supplied (missing folder of the block and diagonal (45t_56b, 45t_56t, 45b_56b, 45b_56t)"
    echo "Usage $0 [path] [diagonal] $CMSSW_BASE"
    echo "./scripts/run.sh output/ZeroBias/block0 45t_56b /afs/cern.ch/work/m/mpitt/PROPOG/Alignment/TestJan/CMSSW_12_4_3" 
    exit 0
fi

workpath=$1
diag=$2
cmssw=$3

#setup CMSSW:
echo setup CMSSW
cd $cmssw/src
eval `scram runtime -sh`

echo Running $diag in $workpath

echo cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
echo copy distill.cc to $workpath
cp distill.cc $workpath/distill_${diag}.cc
echo cd $workpath
cd $workpath
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId distill_${diag}.cc -o distill_${diag}
echo running distill ${diag}
./distill_${diag} ${diag}


#remove the temporary files
rm distill_${diag} distill_${diag}.cc

echo ls
ls -l

#final output
echo $startMsg
echo job finished on `date`
