#include <stdio.h>

int main()
{
    int n, a, b, r;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        r = 1;
        for ( int j = 0; j < b; j++)
        {
            r *= a;
            r %= 10;
        }
        if (r == 0)
            printf("10\n");
        else
            printf("%d\n", r);
    }
    return (0);
}