#include "stdio.h"

int main() {
  int i,n;

  printf("Enter any number: ");
  scanf("%d", &n);

  printf("Natural numbers from %d to 1\n", n);

  for (i = n; i > 0;  i--) {
    printf("%d\n", i);
  }

  return 0;
}
