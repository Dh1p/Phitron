#include<stdio.h>
int main()
{
    int x=10,y,z;
    y=x++;
    z=++y;
    printf("%d\n",z++);
    printf("%d\n",z);
    ++z;
    printf("%d\n",++z);
    printf("%d\n",z++);
    

    return 0;
}