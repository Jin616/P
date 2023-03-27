#include <stdio.h>

void swap(int *a, int *b) {
    int tem;
    tem = *a;
    *a = *b;
    *b = tem;
}

int func(int a, int b) {
    while (1) {
        if (a < b)
            swap(&a, &b);
        if (a % b == 0)
            break;
        else
            a %= b;
    }
    return (b);
}

int main() {
    int a[2], b[2], tem;
    scanf("%d %d\n%d %d", &a[0], &a[1], &b[0], &b[1]);
    tem = func(a[1], b[1]);
    a[0] = (a[0] * b[1] + b[0] * a[1]) / tem;
    a[1] *= b[1] / tem;
    tem = func(a[0], a[1]);
    printf("%d %d", a[0] / tem, a[1] / tem);
    return 0;
}