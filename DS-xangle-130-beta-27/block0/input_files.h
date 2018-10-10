#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.17_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.20_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.28_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.44_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.48_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.49_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.52_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323311.54_re_reco.root"
	};
}
