#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.31_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.32_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.33_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.34_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.35_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.36_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.37_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.38_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.39_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.3_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.40_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.41_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.42_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.43_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.44_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.45_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.46_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.47_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.48_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.49_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.52_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.54_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.55_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.56_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.57_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.58_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.59_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.5_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.60_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.61_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.62_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.63_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.64_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.65_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.66_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.67_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.68_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.69_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.70_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.71_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.72_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.73_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.74_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.75_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.76_re_reco.root"
	};
}
