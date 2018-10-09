#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------

std::vector<std::string> input_files;

void InitInputFiles()
{
	input_files = {
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.4_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.50_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.51_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.53_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.54_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.55_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.57_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.58_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.60_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.62_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.63_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.64_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.67_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.68_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.69_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.6_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.70_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.72_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.74_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.75_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.76_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.77_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.78_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.79_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.7_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.80_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.81_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.82_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.83_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.84_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.85_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.86_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.8_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.91_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.92_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.93_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.94_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.96_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.97_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.98_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.99_re_reco.root",
		"root://eostotem.cern.ch//eos/totem/data/ctpps/reconstruction/2018/alignment_run_September/version2/run_323316.9_re_reco.root"
	};
}
