#include <stdio.h>
#include <math.h>
// sonning darajasini topish

int main(){
  int son, daraja, natija;

  printf("Sonni kiriting: ");
  scanf("%d", &son);
  printf("Darajani kiriting: ");
  scanf("%d", &daraja);
  natija = pow(son, daraja);
  printf("Natija: %d", natija);

  return 0;
}
