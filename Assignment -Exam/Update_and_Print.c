#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d %d",&a,&b);

    arr[a] = b;

    for(int i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}