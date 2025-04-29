#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=2; i<100; i++)
    {
        if(i%2==0 || i%3==0 || i%5==0)
        {
            printf("%d ",i);
        }
        // for(j=1; j<=i; j++)
        // {
        //     if(i%j==0)
        //     {
        //         count++;
        //     }
        // }
        // if(count==2)
        // {
        //     printf("%d",i);
        // }
        // count=0;
    }
    return 0;
}