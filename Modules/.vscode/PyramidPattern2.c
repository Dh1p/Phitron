#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=n+(n-1);
    int space=1;

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            if(j!=1)
            printf(" ");
        }
        space++;
        for(int j=1 ; j<=star; j++)
        {
            printf("*");
        }
        printf("\n");
        star-=2;
    }
    return 0;
}