void fuzzykelembaban_1(){
if (kelembaban_1 < 19){
  kelembaban[0] = 1;
  kelembaban[1] = 0;
  kelembaban[2] = 0;
}
else if(kelembaban_1 >= 19 && kelembaban_1 <39){
    kelembaban[0] = (49 - kelembaban_1) / 30;
    kelembaban[1] = 0;
    kelembaban[2] = 0;
  }
else if(kelembaban_1 >= 39 && kelembaban_1 <49){
    kelembaban[0] = (49 - kelembaban_1) / 30;
    kelembaban[1] = (kelembaban_1 - 39) / 10;
    kelembaban[2] = 0;
  }
else if(kelembaban_1 >= 49 && kelembaban_1 < 59){
      kelembaban[0] = 0;
      kelembaban[1] = (59 - kelembaban_1) / 10;
      kelembaban[2] = (kelembaban_1 - 49) / 30;
}
else if(kelembaban_1 >= 59 && kelembaban_1 < 79){
      kelembaban[0] = 0;
      kelembaban[1] = 0;
      kelembaban[2] = (kelembaban_1 - 49) / 30;
}
else if(kelembaban_1 >= 79 && kelembaban_1 <= 100){
      kelembaban[0] = 0;
      kelembaban[1] = 0;
      kelembaban[2] = 1;
}
else{
        kelembaban[0] = 0;
        kelembaban[1] = 0;
        kelembaban[2] = 1;
      }
}
