#include <stdio.h>

int my_len(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char a[1000];
    scanf("%s", a);

    int len = my_len(a);

    printf("%d\n", len);

    return 0;
}