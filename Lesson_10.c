#include <stdio.h>
//metr, santimetr, kilometr

int main(){
  float m, cm, km;

  printf("Santimetr miqdorini kiriting: ");
  scanf("%f", &cm);

  m = cm / 100;
  km = cm / 100000;
  printf("%.1f cm %.1f m ga va %.1f km ga teng.", cm, m, km);

  return 0;
}
