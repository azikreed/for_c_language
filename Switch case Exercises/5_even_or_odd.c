#include "stdio.h"

int main() {
  int num;

  printf("Enter any number: ");
  scanf("%d", &num);

  switch (num % 2 == 0) {
    case 0:
      printf("%d is odd", num);
      break;
    case 1:
      printf("%d is even", num);
  }

  return 0;
}
