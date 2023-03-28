#include <stdio.h>

char buf[1000000];
int idx;

void dep(int d, int m, int n, int *arr) {
    if (d > m) {
        for (int i = 1; i <= m; i++) {
            buf[idx++] = arr[i] + '0';
            buf[idx++] = ' ';
        }
        buf[idx++] = '\n';
    } else {
        for (int i = 1; i <= n; i++) {
            arr[d] = i;
            for (int j = 1; j < d; j++)
                if (arr[j] == i) {
                    arr[d] = 0;
                    break;
                }
            if (arr[d])
                dep(d + 1, m, n, arr);
        }
    }
}

int main() {
    int n, m;
    idx = 0;
    scanf("%d %d", &n, &m);
    int arr[m + 1];
    dep(1, m, n, arr);
    printf("%s", buf);
    return 0;
}