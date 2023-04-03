#include <stdio.h>

int main() {
    int a, b, c, d, e, f;
    scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
    printf("%d %d\n", (f*b - c*e)/(d*b - a*e), (a*f - c*d)/(a*e - b*d));
    return 0;
}