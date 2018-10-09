import root;
import pad_layout;

string topDir = "../../";

TH2_palette = Gradient(blue, heavygreen, yellow, red);

string datasets[] = {
	"DS-xangle-160-beta-30",
	"DS-xangle-131-beta-30",
	"DS-xangle-130-beta-30",
	"DS-xangle-130-beta-25",
};

string units[] = { "L_2_F", "L_1_F", "R_1_F", "R_2_F" };
//string units[] = { "L_2_F" };
string unit_labels[] = { "45-220-fr", "45-210-fr", "56-210-fr", "56-220-fr" };

real sh_top[] = { 6.6, 6.0, 5.7,     7.2, 7.5, 8.2 };
real sh_bot[] = { -6.8, -6.4, -6.2, -6.3, -6.4, -7.1 };

drawGridDef = true;

TH2_x_min = -5;
TH2_x_max = +5;
TH2_y_min = -5;
TH2_y_max = +10;

string dir = "hit distributions/vertical, aligned, after selection";
string suffix = "_al_sel";
//string dir = "hit distributions/vertical, aligned, before selection";
//string suffix = "_al_nosel";

//----------------------------------------------------------------------------------------------------

real edge = 3.6101;
real cutEdge = 2.22721 / sqrt(2);
int strips = 11;
real margin_v_e = 0.2;
real margin_v_b = 0.4;
real margin_u = 0.1;

path det_shape = (cutEdge, 0)--(edge, 0)--(edge, edge)--(0, edge)--(0, cutEdge)--cycle;
det_shape = scale(10) * rotate(45) * shift(-cutEdge/2, -cutEdge/2) * det_shape;

path hor_det_shape = shift(0, -cutEdge/sqrt(2)*10) * det_shape;

//----------------------------------------------------------------------------------------------------

for (int dsi : datasets.keys)
{
	NewRow();

	NewPad(false);
	label("{\SetFontSizesXX " + datasets[dsi] + "}");

	string file_45b = topDir + datasets[dsi] + "/distributions_45b_56t.root";
	string file_45t = topDir + datasets[dsi] + "/distributions_45t_56b.root";

	for (int ui : units.keys)
	{
		NewPad("$x\ung{mm}$", "$y\ung{mm}$", 6cm, 12cm, axesAbove=true);
		scale(Linear, Linear, Log);

		//TH2_z_max = 1e3;

		RootGetObject(file_45b, dir + "/h_y_"+units[ui]+"_vs_x_"+units[ui] + suffix);
		draw(robj, "p,bar");

		RootGetObject(file_45t, dir + "/h_y_"+units[ui]+"_vs_x_"+units[ui] + suffix);
		draw(robj, "p");

		/*
		draw(shift(0, sh_top[ui])*det_shape);
		draw(shift(0, sh_bot[ui])*scale(1, -1)*det_shape);
		*/

		//draw(shift(6.2, 0)*rotate(-90)*det_shape);

		limits((-5, -5), (+5, +5), Crop);
		//limits((-15, -30), (+15, +30), Crop);

		yaxis(XEquals(-2, false), magenta+2pt);
		yaxis(XEquals(+2, false), magenta+2pt);

		AttachLegend(replace(unit_labels[ui], "_", "\_"));
	}
}

GShipout(hSkip=1mm, vSkip=1mm);
