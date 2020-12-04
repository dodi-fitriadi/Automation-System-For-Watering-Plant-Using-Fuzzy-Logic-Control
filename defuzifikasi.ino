void defuzifikasi_1(){

jumlah_nilteng = (rule[0][0] * L_Lama * TT_Lama) + (rule[0][1] * L_Cepat * TT_Cepat) + (rule[0][2] * L_Cepat * TT_Cepat)+
               (rule[1][0] * L_Lama* TT_Lama) + (rule[1][1] * L_Sedang * TT_Sedang)   + (rule[1][2] * L_Cepat * TT_Cepat)+
               (rule[2][0] * L_Lama * TT_Lama) + (rule[2][1] * L_Sedang * TT_Sedang) + (rule[2][2] * L_Sedang * TT_Sedang);


jumlah_nil  = (rule[0][0] * L_Lama) + (rule[0][1]* L_Cepat) + (rule[0][2]*L_Cepat)+
               (rule[1][0] * L_Lama) + (rule[1][1] * L_Sedang)   + (rule[1][2] * L_Cepat)+
               (rule[2][0] * L_Lama) + (rule[2][1] * L_Sedang) + (rule[2][2] * L_Sedang);

//defuzzyfikasi
if(jumlah_nil==0)
 {
  coa=0;
 }
else
 {
  coa=jumlah_nilteng/jumlah_nil;
 }
}
