#include "stdio.h"

int main() {
  int n, first, last, sum;

  printf("Enter any number: ");
  scanf("%d", &n);

  first = n;

  while (first >= 10) {
    first /= 10;
  }

  last = n % 10;

  sum = first + last;
  printf("%d", sum);

  return 0;
}
