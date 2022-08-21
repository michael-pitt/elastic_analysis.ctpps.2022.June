# PPS Alignment

## Description

This package is responsible for the PPS alignment using calibration run (low-luminosity reference run).

## Instalation
```bash
cmsrel CMSSW_12_4_3
cd CMSSW_12_4_3/src
git clone git@github.com:michael-pitt/elastic_analysis.ctpps.2022.June.git
scram b -j
```

## Analysis
The following steps should be executed (tested with 2022 June data)

### Create work folders

We split the data into small blocks, which will be processed in parallel

```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June/get_input
bash make_inputs_from_list.sh list_folders.txt
```
we can also use a single path instead of txt file with list of paths

### Analysis workflow

There are four steps for alignment with elastics:
  - Create distilled ntuples (example for making one)
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
cp distill.cc output/ZeroBias/block0
cd output/ZeroBias/block0
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId distill.cc -o distill
distill 45t_56b
```
  - Create distribusions from the distilled ntuples
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
cp distributions.cc output/ZeroBias
cd output
mkdir plots
cat "../get_input/parameters_template.h" | sed "s|\$BLOCKS||;" > "parameters.h"
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId distributions.cc -o distributions 
./distributions 45t_56b -input-dir $PWD -output-dir $PWD/plots
./distributions 45b_56t -input-dir $PWD -output-dir $PWD/plots
```


### Submitting jobs

To process all datasets in parallel we can use Condor:
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
bash scripts/RunCondor.sh
```

Once the datasets are processed, merge them using the following command:
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
bash scripts/merge.sh
```


