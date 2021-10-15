#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number:");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Result: ", num1, num2, sum);

    return 0;
}
