#include <stdio.h>

int main(){
  int month;

  printf("Enter month number (1 - 12): ");
  scanf("%d", &month);

  if(month == 1 | month == 3 | month == 5 | month == 7 | month == 8 | month == 10 | month == 12){
    printf("31 days");
  } else if (month == 2){
    printf("28-29 days");
  } else if(month == 4 | month == 6 | month == 9 | month == 11) {
    printf("30 days");
  } else {
    printf("Enter month number (1-12).");
  }


  return 0;
}
