#include<stdio.h>

void fun(int* p)
{
    *p=25;
}


int main()
{
    int x;
    scanf("%d",&x);
    fun(&x);
    printf("%d\n",x);
    return 0;
}