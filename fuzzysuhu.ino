void fuzzysuhu_1(){
if (suhu_1 < 15){
  suhu[0] = 1;
  suhu[1] = 0;
  suhu[2] = 0;
}
else if(suhu_1 >= 15 && suhu_1 < 25){
  suhu[0] = (30 - suhu_1) / 15;
  suhu[1] = 0;
  suhu[2] = 0;
}
else if(suhu_1 >= 25 && suhu_1 < 30){
  suhu[0] = (30 - suhu_1) / 15;
  suhu[1] = (suhu_1 - 25) / 5;
  suhu[2] = 0;
}
else if(suhu_1 >=30 && suhu_1 < 35){
      suhu[0] = 0;
      suhu[1] = (35 - suhu_1) / 5;
      suhu[2] = (suhu_1 - 30) / 15;
}
else if(suhu_1 >=35 && suhu_1 < 45){
      suhu[0] = 0;
      suhu[1] = 0;
      suhu[2] = (suhu_1 - 30) / 15;
}
else if(suhu_1 >=45 && suhu_1 <= 50){
      suhu[0] = 0;
      suhu[1] = 0;
      suhu[2] = 1;
}
else{
        suhu[0] = 0;
        suhu[1] = 0;
        suhu[2] = 1;
}
}
