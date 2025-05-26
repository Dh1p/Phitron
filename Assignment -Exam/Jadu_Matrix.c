/**
 *     DHIP
 **/

#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                    {
                        flag = -1;
                    }
                }
                if (i + j == r - 1)
                {
                    if (a[i][j] != 1)
                    {
                        flag = -1;
                    }
                }
                if (i != j && i + j != r - 1)
                {
                    if (a[i][j] != 0)
                    {
                        flag = -1;
                    }
                }
            }
        }
    }
    else
    {
        printf("NO\n");
        return 0;
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}