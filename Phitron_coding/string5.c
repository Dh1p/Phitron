#include<stdio.h>
int main()
{
    char a[10001];
    scanf("%s",&a);

    int sum=0;
    for(int i=0; a[i]!='\0'; i++)
    {
        sum+= a[i]-'0';
    }

    printf("%d",sum);
    return 0;
}