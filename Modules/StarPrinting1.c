#include<stdio.h>
int main()
{
    int n,star=1;
    scanf("%d",&n);

    for(int i=0; i<n; i++) // for printing lines
    {
        for(int j=1; j<=star; j++) // for printing stars
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}