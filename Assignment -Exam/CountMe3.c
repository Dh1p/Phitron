#include<stdio.h>
int main()
{
    int n, countCapital=0, countSmall=0, countDigit=0;
    scanf("%d",&n);
    char a[10001];
    for(int i=0; i<n; i++)
    {
        scanf("%s",&a);

        for(int i=0; a[i]!='\0'; i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                countCapital++;
            }
            else if(a[i]>='a' && a[i]<='z')
            {
                countSmall++;
            }
            else
            {
                countDigit++;
            }
        }

        printf("%d %d %d\n",countCapital,countSmall,countDigit);
        countCapital=0, countSmall=0, countDigit=0;

    }
    return 0;
}