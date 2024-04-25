# PPS Alignment

This package is responsible for the PPS alignment using calibration run (low-luminosity reference run) with vertical detectors.

# Instalation
```bash
cmsrel CMSSW_14_0_3
cd CMSSW_14_0_3/src
git clone git@github.com:michael-pitt/elastic_analysis.ctpps.2022.June.git
scram b -j
```

# Analysis
The following steps should be executed (tested with 2023 April data)

## Create work folders

We split the data into small blocks, which will be processed in parallel. The data should be prealignmed data.

```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June/get_input
bash make_inputs_from_list.sh list_folders.txt
```
we can also use a single path instead of txt file with list of paths
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June/get_input
bash make_inputs_from_list.sh /eos/cms/store/group/phys_pps/reconstruction/2023/alignment_run_April17/Run366190
```

In folder `output` new folders will be created (the name of a folder for each entry in the list of paths). In each new folder, blocks of list of files will be written

## Analysis workflow

There are four steps for alignment with elastics:

### 1. Create distilled ntuples
  
#### Example for making one file
  
```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
cp distill.cc output/Run366190/block0
cd output/Run366190/block0
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId distill.cc -o distill
distill 45t_56b
```

#### Example for submitting jobs

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

### 2. Create distribusions from the distilled ntuples
enter the working folder:

```bash
cd $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June
cp distributions.cc output/Run366190
cd output/Run366190
```

before making distributions

1. update `common_parameters.h` file with proper optical functions. The optical functions can be obtianed from:
```bash
python3 $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June/scripts/dump_optics.py
```

2. update `distributions.cc` file (L680) with proper selection cuts, using:
```bash
 python3 $CMSSW_BASE/src/elastic_analysis.ctpps.2022.June/scripts/print_XYcuts.py
```

3. after running once, check `selected - angles -> graphs` to determine the ranges of the anges and update the code.

Create distributions:
```bash
cp ../../distributions.cc .
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId distributions.cc -o distributions 
./distributions 45t_56b -input-dir $PWD -output-dir $PWD
./distributions 45b_56t -input-dir $PWD -output-dir $PWD
```


### 3. alignment

Run the alignment code:

```bash
cp ../../alignment.cc .
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId alignment.cc -o alignment 
./alignment combined
```

### 4. alignment fit

Fit results vs time step can be fitted using the following code

```bash
cp ../../alignment_fit.cc .
g++ -O3 -Wall -Wextra -Wno-attributes --std=c++11 -I"$CMSSW_BASE/src/elastic_analysis.ctpps.2022.June" `root-config --libs` -lMinuit -lMinuit2 `root-config --cflags` -I"$CMSSW_BASE/src" -I"$CMSSW_RELEASE_BASE/src" -L"$CMSSW_BASE/lib/$SCRAM_ARCH" -L"$CMSSW_RELEASE_BASE/lib/$SCRAM_ARCH" -lDataFormatsFWLite -lDataFormatsCommon -lDataFormatsCTPPSDetId alignment_fit.cc -o alignment_fit 
./alignment_fit combined
```
