#include <stdio.h>
int main()
{
    char a[10001];
    scanf("%s", &a);

    int fre[26];

    for (int i = 0; a[i] != '\0'; i++)
    {
        fre[a[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c - %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}