#include "stdio.h"
#include "math.h"

int main() {
  float a,b,c;
  float root1, root2;
  float discriminant;

  printf("Enter a , b , c: ");
  scanf("%f %f %f", &a, &b, &c);

  discriminant = (b * b) - 4 * a * c;

  if(discriminant > 0){
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("First root = %f, Second root = %f", root1, root2);
  } else if(discriminant == 0){
    root1 = root2 = -b / (2 * a);
    printf("First root = %f, Second root = %f", root1, root2);
  } else if(discriminant < 0){
    printf("discriminant 0 dan kichik bo'lsa yechimga ega emas! ");
  }


  return 0;
}
