#include <stdio.h>
#include <math.h>

int main(){
  float p,r,t,CI;

  printf("p: ");
  scanf("%f", &p);

  printf("t: ");
  scanf("%f", &t);

  printf("r: ");
  scanf("%f", &r);

  CI = p*(pow((1+r/100), t));
  printf("CI = %f", CI);

  return 0;
}
