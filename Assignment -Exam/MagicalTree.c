/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star =1;
    
    int count =0;

    for(int i =1; i<=n; i+=2)
    {
        count++;
    }
    int space=count+4;
    for(int i=1; i<=count+5; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=star; j++)
        {
            printf("*");
        }
        
        printf("\n");

        star+=2;
        space--;
    }
    
    int star1 = n;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}