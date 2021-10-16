#include <stdio.h>

int main(){
  int day;

  printf("Enter week number: ");
  scanf("%d", &day);

  if(day == 1){
    printf("Dushanba");
  } else if(day == 2){
    printf("Seshanba");
  } else if(day == 3){
    printf("Chorshanba");
  } else if(day == 4){
    printf("Payshanba");
  } else if(day == 5){
    printf("Juma");
  } else if(day == 6){
    printf("Shanba");
  } else if(day == 7){
    printf("Yakshanba");
  } else {
    printf("Not a week number.");
  }

  return 0;
}
