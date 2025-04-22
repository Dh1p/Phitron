#include<stdio.h>
int main()
{
    char a[100];
    fgets(a,100,stdin);

    for(int i=0; a[i]!='/'; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n%s",a);
    return 0;
}