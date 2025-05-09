#include<stdio.h>
#include<string.h>

int is_palindrome(char a[])
{
    int len = strlen(a);

    int i=0, j=len-1;
    while(i<j)
    {
        if(a[i]!=a[j])
        {
            return 0;
        }

        i++;
        j--;
    }

    return 1;
}

int main()
{
    char a[1001];
    scanf("%s",a);
    int num = is_palindrome(a);

    if(num==1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}