#include <stdio.h>
// uchburchak yuzi

int main(){
  float h, a,s;

  printf("Uchburchakning balandligini kiriting: ");
  scanf("%f", &h);
  printf("Uchburchakning balandligi tushirilgan tomonni kiriting: ");
  scanf("%f", &a);
  s = h * a / 2;
  printf("Uchburchak yuzi %.2f ga teng.", s);

  return 0;
}
