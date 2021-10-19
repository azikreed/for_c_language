#include "stdio.h"

int main() {
  int i,n,res = 0;

  printf("Enter any number: ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    if(i % 2 == 1){
      res += i;
    }
  }

  printf("Sum of all odd numbers = %d", res);

  return 0;
}
