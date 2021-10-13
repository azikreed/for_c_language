#include <stdio.h>
//day converter to year week and day

int main(){
  int day, week, year;

  printf("Kun miqdorini kiriting: ");
  scanf("%d", &day);

  year = day / 365;
  week = (day - year * 365) / 7;
  day = day - ((year * 365) + (week * 7));

  printf("%d yilga va %d haftaga %d kun teng.", year, week, day);


  return 0;
}
