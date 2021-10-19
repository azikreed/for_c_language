#include "stdio.h"

int main() {
  int i,n,res = 0;

  printf("Enter any number: ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    if(i % 2 == 0){
      res += i;
    }
  }

  printf("Sum of all even numbers = %d", res);

  return 0;
}
