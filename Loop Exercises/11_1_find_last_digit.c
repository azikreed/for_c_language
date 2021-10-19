#include "stdio.h"

int main() {
  int n, lastDigit;

  printf("Enter any number: ");
  scanf("%d", &n);

  lastDigit = n % 10;

  printf("Last digit: %d", lastDigit);

  return 0;
}
