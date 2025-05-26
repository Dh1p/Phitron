// Take a number from user and check if its a positive or negative number.

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a > 0)
    {
        printf("The number is positive.\n");
    }
    else if (a < 0)
    {
        printf("The number is negative.\n");
    }
    else
    {
        printf("The number is zero.\n");
        printf("Hello world");
    }

    return 0;
}
