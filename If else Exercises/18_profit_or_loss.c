#include "stdio.h"

int main() {
  int cp, sp, profit;

  printf("Enter cost price: ");
  scanf("%d", &cp);

  printf("Enter sell price: ");
  scanf("%d", &sp);

  if(sp > cp){
    profit = sp - cp;
    printf("Profit: %d", profit);
  } else if(sp < cp){
    profit = cp - sp;
    printf("Loss: %d", profit);
  } else {
    printf("No profit No loss");
  }

  return 0;
}
