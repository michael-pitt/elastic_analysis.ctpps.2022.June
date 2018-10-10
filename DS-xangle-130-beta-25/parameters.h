#include "parameters_global.h"

void Init_base()
{
	// load global settings
	Init_global();

	// list of (sub-)directories with distilled ntuples
	distilledNtuples.push_back("block0");
	distilledNtuples.push_back("block1");
	distilledNtuples.push_back("block2");

	// alignment periods
	anal.alignment_t0 = 65481;				// beginning of the first time-slice
	anal.alignment_ts = 72890 - 65481;		// time-slice in s
}

//----------------------------------------------------------------------------------------------------

void Init_45b_56t()
{
	Init_global_45b_56t();

	// analysis settings
	//anal.cut1_a = 1.; anal.cut1_c = -240E-6; anal.cut1_si = 150E-6;
	//anal.cut2_a = 1.; anal.cut2_c = +435E-6; anal.cut2_si = 40E-6;

	//anal.cut3_c = 0.49; anal.cut3_si = 0.055;
	//anal.cut4_c = -0.03; anal.cut4_si = 0.033;

	//anal.cut5_a = -0.09; anal.cut5_c = -0.29; anal.cut5_si = 0.04;
	//anal.cut6_a = -0.09; anal.cut6_c = 0.15; anal.cut6_si = 0.04;

	//anal.cut7_a = 0.0; anal.cut7_c = 0.55; anal.cut7_si = 10.0;
}

//----------------------------------------------------------------------------------------------------

void Init_45t_56b()
{
	Init_global_45t_56b();

	// analysis settings
	//anal.cut1_a = 1.; anal.cut1_c = -290E-6; anal.cut1_si = 150E-6;
	//anal.cut2_a = 1.; anal.cut2_c = +425E-6; anal.cut2_si = 40E-6;

	//anal.cut3_c = 0.43; anal.cut3_si = 0.023;
	//anal.cut4_c = -0.055; anal.cut4_si = 0.031;

	//anal.cut5_a = -0.09; anal.cut5_c = -0.45; anal.cut5_si = 0.04;
	//anal.cut6_a = -0.09; anal.cut6_c = +0.35; anal.cut6_si = 0.04;

	//anal.cut7_a = 0.0; anal.cut7_c = 0.8; anal.cut7_si = 10.0;
}
