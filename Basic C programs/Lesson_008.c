#include <stdio.h>
//uchburchakning 3-burchagini topish

int main(){
  int a,b,c;

  printf("Uchburchakning a burchak gradusini kiriting: ");
  scanf("%d", &a);
  printf("Uchburchakning b burchak gradusini kiriting: ");
  scanf("%d", &b);

  c = 180 - (a+b);
  printf("Uchburchakning c burchagi %d ga teng.", c);

  return 0;
}
