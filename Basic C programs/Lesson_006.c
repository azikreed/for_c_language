#include <stdio.h>
//doira diametri + uzunligi + yuzi

int main() {
  float r,d,l,s;

  printf("Doira radiusi uzunligini kiriting: ");
  scanf("%f", &r);
  d = 2*r;
  printf("Doira diamteri %.2f ga teng.\n", d);
  l = 2*3.14*r;
  printf("Doira uzunligi %.2f ga teng.\n", l);
  s = 3.14 * r * r;
  printf("Doira yuzi %.2f ga teng.\n", s);

  return 0;
}
