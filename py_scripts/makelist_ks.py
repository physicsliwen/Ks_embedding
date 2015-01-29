import glob

#raw_list_geant = glob.glob('/eliza17/star/starprod/embedding/AuAu200_production_2011/K0short_100_20143801/P11id.SL11d_embed/2011/*/*geant.root')
#Lambda_Flat_Pt
raw_list_pico_ks_flat = glob.glob('/global/homes/l/lwen1990/pwg/embedding/Ks0/output_fp/auau200GeV_run11_ks_exp.*.ks.picodst.root')
raw_list_pico_ks_exp = glob.glob('/global/homes/l/lwen1990/pwg/embedding/Ks0/output_exp/auau200GeV_run11_ks_exp.*.ks.picodst.root')
#raw_list_event = glob.glob('/eliza17/star/starprod/embedding/AuAu200_production_2011/K0short_100_20143801/P11id.SL11d_embed/2011/*/*event.root')
outfile_ks_flat = open('../analysis/picodst_ks_flat.list', 'w')
outfile_ks_exp = open('../analysis/picodst_ks_exp.list', 'w')
#outfile_antila_flat = open('../analysis/picodst_antila_flat.list', 'w')
#outfile_antila_exp = open('../analysis/picodst_anti_la_exp.list', 'w')

for line1, line2 in zip(raw_list_pico_ks_flat, raw_list_pico_ks_exp):
    #par1, par2, par3, par4, par5, par6, par7 = line.split('/')
    #a, b = par7.split('.')
    print line1
    newline1 = ''.join([line1, '\n'])
    newline2 = ''.join([line2, '\n'])
    #newline2 = ''.join([line2, '\n'])
    outfile_ks_flat.write(newline1)
    outfile_ks_exp.write(newline2)

outfile_ks_flat.close()
outfile_ks_exp.close()
