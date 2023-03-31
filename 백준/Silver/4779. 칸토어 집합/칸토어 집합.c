#include <stdio.h>
#include <math.h>
#include <string.h>

char buf[177148];
int idx;

void cantor(int dep) {
    if (dep > 0) {
        cantor(dep - 1);
        idx += (int)pow(3, dep - 1);
        cantor(dep - 1);
    }
    else
        buf[idx++] = '-';
}

int main() {
    int n, pown;
    while (scanf("%d", &n) != -1) {
        if (n == 0) {
            printf("-\n");
            continue;
        }
        memset(buf, ' ', sizeof(buf) - 1);
        idx = 0;
        cantor(n - 1);
        buf[idx] = 0;
        printf("%s", buf);
        memset(buf, ' ', idx);
        printf("%s", buf);
        idx = 0;
        cantor(n - 1);
        printf("%s\n", buf);
    }
    return 0;
}