#include <stdio.h>
//celsius to fahrenheit

int main(){
  float celsius, fahrenheit;
  printf("Celsius qiymatini kiriting: ");
  scanf("%f", &celsius);

  fahrenheit = (celsius * 9/5) + 32;
  printf("Fahrenheit qiymati: %f ga teng", fahrenheit);

  return 0;
}
