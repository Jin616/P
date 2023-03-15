#include <stdio.h>

int main() {
    int n, d, i;
    scanf("%d\n%d", &n, &d);
    n -= n % 100;
    for (i = 0; i < 100; i++)
        if ((n + i) % d == 0)
            break ;
    if (i < 10)
        printf("0");
    printf("%d", i);
    return (0);
}