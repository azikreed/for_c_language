#include <stdio.h>

int main(){
  int num;

  printf("Enter any number: ");
  scanf("%d", &num);

  (num % 2 == 0)
    ? printf("This number is even!")
    : printf("This number is odd!");

  return 0;
}
