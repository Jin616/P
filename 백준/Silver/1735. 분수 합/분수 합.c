#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = c = a * d + c * b;
    b = d = b * d;
    while (c * d)
        if (c > d)
            c %= d;
        else
            d %= c;
    printf("%d %d", a / (c + d), b / (c + d));
    return 0;
}