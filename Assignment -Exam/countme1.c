#include<stdio.h>
int main()
{
    int n, count2=0, count3=0;
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            count2++;
        }
        if(arr[i]%3==0 & arr[i]%2!=0)
        {
            count3++;
        }
    }

    printf("%d %d\n",count2,count3);


    return 0;
}