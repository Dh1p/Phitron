#include<stdio.h>

void my_abs(int* n)
{
    if(*n<1)
    *n*=-1;
}

int main()
{
    int n;
    scanf("%d",&n);

    my_abs(&n);

    printf("%d\n",n);

    return 0;
}