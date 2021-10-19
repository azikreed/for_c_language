#include "stdio.h"

int main() {
  int i,n,res = 0;

  printf("Enter any number: ");
  scanf("%d", &n);

  for (i = 0; i <= n; i++) {
    res += i;
  }

  printf("Sum all numbers from 1 to %d = %d", n, res);

  return 0;
}
