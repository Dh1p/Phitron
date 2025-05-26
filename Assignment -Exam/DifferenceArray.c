/**
 *     DHIP
**/
     
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n;

    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        int a[n];
        int b[n];
        int j=0;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0; i<n; i++)
        {
            b[j]=a[i];
            j++;
        }

        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(b[i]>b[j])
                {
                    int temp = b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        int c[n];
        int m=0;
        for(int i=0; i<n; i++)
        {
            c[m] = abs(a[i]-b[i]);
            m++;
        }

        for(int i=0; i<n; i++)
        {
            printf("%d ",c[i]);
        }

        printf("\n");
    }
    return 0;
}