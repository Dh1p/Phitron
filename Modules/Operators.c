#include<stdio.h>
int main()
{
    float a=12, b=5;
    
    int sum = (a+b);
    printf("Summation = %d\n", sum);

    int sub = (a-b);
    printf("Subtracion = %d\n", sub);

    int mul = (a*b);
    printf("Multiplication = %d\n", mul);

    float div = (a/b);
    printf("Division = %f\n", div);

    return 0;
}