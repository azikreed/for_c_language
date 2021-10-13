#include <stdio.h>
#include <math.h>

int main(){
  float p,r,t,CI;

  printf("p: ");
  scanf("%f", &p);

  printf("r: ");
  scanf("%f", &r);

  printf("t: ");
  scanf("%f", &t);

  CI = p*(pow((1+r/100), t));
  printf("CI = %f", CI);

  return 0;
}
