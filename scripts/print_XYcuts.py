import ROOT
ROOT.gROOT.SetBatch(True)

_file0 = ROOT.TFile.Open("distill_45b_56t.root");
tree = _file0.Get("distilled")
hx = ROOT.TH1F('hx',';par;events',100,-2,2); sigX = 2 # in mm
hy = ROOT.TH1F('hy',';par;events',300,-15,15); sigY = 2 # in mm

for sec in ['2','1']:
  for arm in ['R','L']:
    tree.Draw("y_"+arm+"_"+sec+"_F >> hy")
    bin = hy.GetMaximumBin()
    Ymin = "%0.2f" % (hy.GetBinCenter(bin) - sigY)
    Ymax = "%0.2f" % (hy.GetBinCenter(bin) + sigY)

    tree.Draw("x_"+arm+"_"+sec+"_F >> hx")
    bin = hx.GetMaximumBin()
    Xmin = "%0.2f" % (hx.GetBinCenter(bin) - sigX)
    Xmax = "%0.2f" % (hx.GetBinCenter(bin) + sigX)
    print("\tif (h_al."+arm+"_"+sec+"_F.x < "+Xmin+" || h_al."+arm+"_"+sec+"_F.x > "+Xmax+" ) continue;")
    #print("\tif (h_al."+arm+"_"+sec+"_F.x < "+Xmin+" || h_al."+arm+"_"+sec+"_F.x > "+Xmax+" || h_al."+arm+"_"+sec+"_F.y < "+Ymin+" || h_al."+arm+"_"+sec+"_F.y > "+Ymax+") continue;")