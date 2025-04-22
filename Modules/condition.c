#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d",&a);
    if(a>1000)
    {
        printf("Khaite jabo\n");
        if(a>1200)
        {
            printf("Biriani khabo\n");
        }
        else
        {
            printf("Bhat khabo\n");
        }
    }
    else if(a>500 && a<800)
    {
        printf("Fuchka Khabo\n");
    }
    else if(a>800)
    {
        printf("Icecream Khabo\n");
    }
    else
    {
        printf("Kichu khabo na\n");
    }

    return 0;
}