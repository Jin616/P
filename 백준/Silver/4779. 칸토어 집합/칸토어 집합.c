#include <stdio.h>
#include <math.h>

char buf[531442];
int idx;

void cantor(int dep, int n) {
    if (dep != 0) {
        cantor(dep - 1, n);
        for (int i = 0; i < (int)pow(3, dep - 1); i++)
            buf[idx++] = ' ';
        cantor(dep - 1, n);
    }
    else
        buf[idx++] = '-';
}

int main() {
    int n;
    idx = 0;
    while (scanf("%d", &n) != -1) {
        cantor(n, n);
        buf[idx++] = '\n';
        buf[idx] = 0;
        printf("%s", buf);
        idx = 0;
    }
    return 0;
}