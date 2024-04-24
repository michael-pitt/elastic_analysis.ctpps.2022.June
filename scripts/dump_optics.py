import ROOT

optics_file = '/eos/cms/store/group/phys_pps/reconstruction/optical_functions/2024/version_1/160.000urad.root'

infile = ROOT.TFile.Open(optics_file)
#notations: R1,2: XRPV_D6R5_B1, XRPV_B6R5_B1
#notations: L1,2: XRPV_D6L5_B2, XRPV_B6L5_B2

# read optical parameters for xi = 0
v_x_R_1_F = infile.Get("XRPV_D6R5_B1/g_v_x_vs_xi").Eval(0)
L_x_R_1_F = infile.Get("XRPV_D6R5_B1/g_L_x_vs_xi").Eval(0)
v_y_R_1_F = infile.Get("XRPV_D6R5_B1/g_v_y_vs_xi").Eval(0)
L_y_R_1_F = infile.Get("XRPV_D6R5_B1/g_L_y_vs_xi").Eval(0)

v_x_R_2_F = infile.Get("XRPV_B6R5_B1/g_v_x_vs_xi").Eval(0)
L_x_R_2_F = infile.Get("XRPV_B6R5_B1/g_L_x_vs_xi").Eval(0)
v_y_R_2_F = infile.Get("XRPV_B6R5_B1/g_v_y_vs_xi").Eval(0)
L_y_R_2_F = infile.Get("XRPV_B6R5_B1/g_L_y_vs_xi").Eval(0)

v_x_L_1_F = infile.Get("XRPV_D6L5_B2/g_v_x_vs_xi").Eval(0)
L_x_L_1_F = infile.Get("XRPV_D6L5_B2/g_L_x_vs_xi").Eval(0)
v_y_L_1_F = infile.Get("XRPV_D6L5_B2/g_v_y_vs_xi").Eval(0)
L_y_L_1_F = infile.Get("XRPV_D6L5_B2/g_L_y_vs_xi").Eval(0)

v_x_L_2_F = infile.Get("XRPV_B6L5_B2/g_v_x_vs_xi").Eval(0)
L_x_L_2_F = infile.Get("XRPV_B6L5_B2/g_L_x_vs_xi").Eval(0)
v_y_L_2_F = infile.Get("XRPV_B6L5_B2/g_v_y_vs_xi").Eval(0)
L_y_L_2_F = infile.Get("XRPV_B6L5_B2/g_L_y_vs_xi").Eval(0)

print("    v_x_R_1_F = %f; L_x_R_1_F = %f; v_y_R_1_F = %f; L_y_R_1_F = %f;"%(v_x_R_1_F,L_x_R_1_F,v_y_R_1_F,L_y_R_1_F))
print("    v_x_R_2_F = %f; L_x_R_2_F = %f; v_y_R_2_F = %f; L_y_R_2_F = %f;"%(v_x_R_2_F,L_x_R_2_F,v_y_R_2_F,L_y_R_2_F))
print()
print("    v_x_L_1_F = %f; L_x_L_1_F = %f; v_y_L_1_F = %f; L_y_L_1_F = %f;"%(v_x_L_1_F,L_x_L_1_F,v_y_L_1_F,L_y_L_1_F))
print("    v_x_L_2_F = %f; L_x_L_2_F = %f; v_y_L_2_F = %f; L_y_L_2_F = %f;"%(v_x_L_2_F,L_x_L_2_F,v_y_L_2_F,L_y_L_2_F))

