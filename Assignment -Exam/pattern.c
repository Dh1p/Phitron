#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pattern=1;
    int space=n-1;

    for(int i=1; i<=n; i++) //for lines
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=pattern; j++) //for printing
        {
            if(i%2!=0)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        pattern+=2;
        space--;
        //printf("%d\n",pattern);
    }

    pattern=(n+(n-1))-2;
    space=1;
    
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }

        for(int j=1; j<=pattern; j++)
        {
            if(n%2==0)
            {
                if(i%2!=0)
                {
                    printf("#");
                }
                else
                {
                    printf("-");
                }
            }
            else
            {
                if(i%2!=0)
                {
                    printf("-");
                }
                else
                {
                    printf("#");
                }
            }
        }
        printf("\n");
        pattern-=2;
        space++;
    }

    return 0;
}