#include<stdio.h>
int main()
{
    int n,m1,m2,d,days=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d %d",&m1,&m2,&d);

        days = d-((d*m1)/(m1+m2));

        printf("%d\n",days);
    }
    return 0;
}