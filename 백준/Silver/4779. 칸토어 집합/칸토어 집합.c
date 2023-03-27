#include <stdio.h>
#include <math.h>

void cantor(int dep, int n) {
    if (dep != 0) {
        cantor(dep - 1, n);
        for (int i = 0; i < (int)pow(3, dep - 1); i++)
            printf(" ");
        cantor(dep - 1, n);
    }
    else
        printf("-");
}

int main() {
    int n;
    while (scanf("%d", &n) != -1) {
        cantor(n, n);
        printf("\n");
    }
    return 0;
}