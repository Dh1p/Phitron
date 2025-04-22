// Take a number from user and check if its a even number or odd number.

#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        if (a == 0)
        {
            printf("The number is zero.\n");
        }
        else
        {
            printf("The number is even.\n");
        }
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}