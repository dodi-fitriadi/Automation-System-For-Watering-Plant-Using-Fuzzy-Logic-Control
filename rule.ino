void rule_evaluation(){
  int i,j;
  for(i=0 ; i<3; i=i+1){
    for(j=0; j<3; j=j+1){
      if (suhu[i] < kelembaban[j]){
        rule[i][j] = suhu[i];
      }
      else {
        rule[i][j] = kelembaban[j];
      }
    }
  }
}
