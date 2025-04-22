#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001];
    fgets(a,10001,stdin);

    for(int i=0; a[i]!='\\'; i++)
    {
        printf("%c",a[i]);
    }

    printf("\n%d",strlen(a));

    return 0;
}