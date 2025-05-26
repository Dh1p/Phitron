/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    long long int a;
    int b,c,d;

    for(int i=0; i<n; i++)
    {
        scanf("%lld %d %d %d",&a,&b,&c,&d);

        if(a%(b*c*d)==0)
        {
            printf("%lld\n",a/(b*c*d));
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}