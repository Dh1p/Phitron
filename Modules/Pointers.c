#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%p\n",&n);

    int* ptr;
    ptr=&n;
    printf("%p\n",ptr);
    printf("%p\n",&ptr);
    *ptr=200;
    printf("%d\n",n);
    printf("%d\n",*ptr);
    return 0;
}