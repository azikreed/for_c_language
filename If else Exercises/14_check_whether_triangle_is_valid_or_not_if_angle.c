#include <stdio.h>

int main(){
  int angle1, angle2, angle3, sum_angles;

  printf("Enter first angle: ");
  scanf("%d", &angle1);
  printf("Enter second angle: ");
  scanf("%d", &angle2);
  printf("Enter threeth angle: ");
  scanf("%d", &angle3);

  sum_angles = angle1 + angle2 + angle3;

  if(sum_angles == 180 & angle1 > 0 & angle2 > 0 & angle3 > 0){
    printf("Triangle is valid.");
  } else{
    printf("Triangle is not valid.");
  }

  return 0;
}
