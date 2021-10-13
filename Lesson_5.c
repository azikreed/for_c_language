#include <stdio.h>
//perimetr + yuza

int main(){
  float a,b,s, p;
  printf("a tomonning uzunligini kiriting: ");
  scanf("%f", &a);
  printf("b tomonning uzunligini kiriting: ");
  scanf("%f", &b);
  s = a * b;
  printf("Ushbu to'gri to'rtburchakning yuzi: %.1f ga teng\n", s);
  p = (a+b)*2;
  printf("Ushbu to'g'ri to'rtburchakning perimetri %.1f ga teng\n", p);
  return 0;
}
