#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.0_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.100_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.104_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.105_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.106_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.107_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.109_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.10_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.112_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.113_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.114_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.115_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.116_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.11_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.120_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.122_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.125_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.12_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.13_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.14_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.15_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.16_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.18_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.19_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.1_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.21_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.22_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.23_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.24_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.25_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.26_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.27_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.29_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.2_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.30_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.48_re_reco.root"
	};
}
