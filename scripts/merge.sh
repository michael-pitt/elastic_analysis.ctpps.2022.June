#!/bin/zsh

if [ -z "$CMSSW_BASE" ]; then
    echo "ERROR: CMSSW_BASE is not set to the empty string"
    exit 0
else
    echo "INFO: release check OK, using CMSSW_BASE=$CMSSW_BASE"
fi

pkg=${CMSSW_BASE}/src/elastic_analysis.ctpps.2022.June

for mode in 45t_56b 45t_56t 45b_56b 45b_56t; do
  hadd -f $pkg/output/distill_${mode}.root $pkg/output/*/block*/distill_${mode}.root
done
