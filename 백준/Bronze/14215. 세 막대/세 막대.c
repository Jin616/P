#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a + b <= c)
        c = a + b - 1;
    if (a + c <= b)
        b = a + c - 1;
    if (b + c <= a)
        a = b + c - 1;
    printf("%d", a + b + c);
    return 0;
}