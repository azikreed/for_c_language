#include <stdio.h>

int main() {
  int a,b,c;

  printf("Enter side a: ");
  scanf("%d", &a);

  printf("Enter side b: ");
  scanf("%d", &b);

  printf("Enter side c: ");
  scanf("%d", &c);

  if(a == b || b == c || a == c){
    printf("Teng yonli uchburchak");
  } else if(a != b & b != c & a != c){
    printf("Turli tomonli uchburchak");
  } else if(a == b & b == c){
    printf("Teng tomonli uchburchak");
  } else {
    printf("Bunday uchburchak mavjud emas!");
  }


  return 0;
}
