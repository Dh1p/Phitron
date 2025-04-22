#include<stdio.h>
int main()
{
    char arr[10];
    int a[5];
    
    for(int i=0; i<10; i++)
    {
        scanf("%c", &arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n%d",sizeof(a)/sizeof(char));

    return 0;
}