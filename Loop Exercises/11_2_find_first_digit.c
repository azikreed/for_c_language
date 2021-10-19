#include "stdio.h"

int main() {
  int n, firstDigit;

  printf("Enter any number: ");
  scanf("%d", &n);

  firstDigit = n;

  while (firstDigit >= 10) {
    firstDigit /= 10;
  }

  printf("First digit: %d", firstDigit);

  return 0;
}
