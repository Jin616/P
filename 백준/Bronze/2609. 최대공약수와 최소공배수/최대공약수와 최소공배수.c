#include <stdio.h>

int main() {
    int n, m, a, b, t;
    scanf("%d%d", &n, &m);
    a = n;
    b = m;
    while (a % b) {
        t = a % b;
        a = b;
        b = t;
    }
    printf("%d\n%d", b, n * m / b);
    return 0;
}