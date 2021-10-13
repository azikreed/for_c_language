#include <stdio.h>
#include <math.h>
//sonni ildizdan chiqarish

int main(){
  int qiymat, ildiz;
  printf("Qaysi sonning ildizini topmoqchisiz? - ");
  scanf("%d", &qiymat);

  ildiz = sqrt(qiymat);
  printf("%d sonining ildizi %d ga teng.", qiymat, ildiz);

  return 0;
}
