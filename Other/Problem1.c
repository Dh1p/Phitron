#include <stdio.h>
int main()
{
    int n, k, o, a, b, count = 0;
    scanf("%d %d", &n, &k);

    int half = (n + 1) / 2;

    if (k <= half)
    {

        for (int i = 1; i <= n; i += 2)
        {
            count++;

            if (count <= k)
            {
                a = i;
            }
            else
            {
                break;
            }
        }

        printf("%d\n", a);
    }
    else
    {
        int count1 = 0;
        o = k - half;

        for (int i = 2; i <= n; i += 2)
        {
            count1++;
            if (count1 <= o)
            {
                b = i;
            }
            else
                break;
        }

        printf("%d\n", b);
    }

    return 0;
}