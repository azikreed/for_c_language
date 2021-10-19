#include "stdio.h"

int main() {
  int i,n;

  printf("Enter any number: ");
  scanf("%d", &n);

  printf("All even numbers from 1 to %d\n", n);

  for (i = 0; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}
