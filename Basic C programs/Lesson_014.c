#include <stdio.h>
//simple interest

int main(){
  float p, t, r, SI;

  printf("p: ");
  scanf("%f", &p);

  printf("t: ");
  scanf("%f", &t);

  printf("r: ");
  scanf("%f", &r);

  SI = (p * t * r)/100;
  printf("SI = %.2f", SI);

  return 0;
}
