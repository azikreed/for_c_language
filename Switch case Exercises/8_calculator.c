#include "stdio.h"

int main() {
  float num1, num2;
  float result = 0;
  char op;

  printf("Enter first number: ");
  scanf("%f", &num1);

  printf("Enter [+ - * /]: ");
  scanf("%s", &op);

  printf("Enter second number: ");
  scanf("%f", &num2);  

  switch (op) {
    case '+':
      result = num1 + num2;
      printf("%f", result);
      break;
    case '-':
      result = num1 - num2;
      printf("%f", result);
      break;
    case '*':
      result = num1 * num2;
      printf("%f", result);
      break;
    case '/':
      result = num1 / num2;
      printf("%f", result);
      break;
    default:
      printf("such a computational practice does not exist");
  }

  return 0;
}
