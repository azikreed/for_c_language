#include "stdio.h"

int main() {
  int i,n, res;

  printf("Enter any number: ");
  scanf("%d", &n);

  for (i = 1; i <= 10; i++) {
    res = n * i;
    printf("%d * %d = %d\n", n, i, res);
  }

  return 0;
}
