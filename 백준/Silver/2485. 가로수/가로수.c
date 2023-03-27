#include <stdio.h>

int main() {
    int n, min, tem, a, b, start, i = 0;
    scanf("%d%d%d", &n, &a, &b);
    min = b - a;
    start = a;
    while (i++ < n - 2) {
        a = b;
        scanf("%d", &b);
        tem = b - a;
        while (min * tem)
            if (min > tem)
                min %= tem;
            else
                tem %= min;
        min = (tem + min);
    }
    printf("%d\n", (b - start) / min + 1 - n);
    return 0;
}