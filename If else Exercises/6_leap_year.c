#include <stdio.h>

int main(){
  int num;

  printf("Enter any number: ");
  scanf("%d", &num);

  if(num % 4 == 0 & num % 100 != 0){
    printf("LEAP YEAR");
  } else if(num % 400 == 0){
    printf("LEAP YEAR");
  } else{
    printf("COMMON YEAR");
  }

  return 0;
}
