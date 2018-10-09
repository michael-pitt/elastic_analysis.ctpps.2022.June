import root;
import pad_layout;

string topDir = "../../";

TH2_palette = Gradient(blue, heavygreen, yellow, red);

string dataset = "DS-xangle-130";

string unit = "L_2_F";
string unit_label = "45-220-fr";

drawGridDef = true;

string dirs[], d_suffixes[], d_labels[];
dirs.push("hit distributions/vertical, aligned, before selection"); d_suffixes.push("_al_nosel"); d_labels.push("before sel.");
dirs.push("hit distributions/vertical, aligned, after selection"); d_suffixes.push("_al_sel"); d_labels.push("after sel.");

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

for (int di : dirs.keys)
{
	string file_45b = topDir + dataset + "/distributions_45b_56t.root";
	string file_45t = topDir + dataset + "/distributions_45t_56b.root";

	NewPad("$x\ung{mm}$", "$y\ung{mm}$", 6cm, 12cm);
	scale(Linear, Linear, Log);

	//TH2_z_max = 1e3;

	RootGetObject(file_45b, dirs[di] + "/h_y_"+unit+"_vs_x_"+unit + d_suffixes[di]);
	draw(robj, "p,bar");

	RootGetObject(file_45t, dirs[di] + "/h_y_"+unit+"_vs_x_"+unit + d_suffixes[di]);
	draw(robj, "p");

	limits((-15, -30), (+15, +30), Crop);

	AttachLegend(d_labels[di]);
}

GShipout(hSkip=1mm, vSkip=1mm);
