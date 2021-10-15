#include <stdio.h>

int main(){
  int num, n, bitStatus;

  printf("Enter any number: ");
  scanf("%d", &num);

  printf("Enter nth bit: ");
  scanf("%d", &n);

  bitStatus = (num >> n) & 1;
  printf("The %d bit is set to %d",n, bitStatus);

  return 0;
}
