//  ********
//	**DHIP**
//  ********
     
#include<stdio.h>
int main()
{
    int i=0,count=0;
    int n;
    scanf("%d",&n);

    while(i==0)
    {
        count++;
        i=n%10;
        n=n/10;
        printf("i->%d\n",i);
        //printf("n->%d\n",n);
    }

   // printf("%d",count);
    return 0;
}