#!/bin/zsh

if [ -z "$CMSSW_BASE" ]; then
    echo "ERROR: CMSSW_BASE is not set to the empty string"
    exit 0
else
    echo "INFO: release check OK, using CMSSW_BASE=$CMSSW_BASE"
fi

pkg=${CMSSW_BASE}/src/elastic_analysis.ctpps.2022.June

extime="microcentury" #testmatch tomorrow workday longlunch microcentury espresso
condor="condor_generator.sub"
echo "executable  = ${pkg}/scripts/run.sh" > $condor
echo "output      = ${condor}.out" >> $condor
echo "error       = ${condor}.err" >> $condor
echo "log         = ${condor}.log" >> $condor
echo "+JobFlavour =\"${extime}\"">> $condor
echo "requirements = (OpSysAndVer =?= \"CentOS7\")" >> $condor  # SLCern6 CentOS7

echo $pkg/output
for ds in `ls -d $pkg/output/*/`; do
  echo submit all $ds jobs
  for block in $ds/block*; do
    for mode in 45t_56b 45t_56t 45b_56b 45b_56t; do
    if test ! -f "${block}/distill_${mode}.root"; then
      echo produce ${block}/distill_${mode}.root
      echo "arguments   = ${block} ${mode} ${CMSSW_BASE}" >> $condor
      echo "queue 1" >> $condor
    fi
	done
done
done

echo "Submitting $condor"
echo condor_submit $condor
