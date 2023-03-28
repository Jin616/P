#include <stdio.h>

void dep(int d, int m, int n, int *arr) {
    if (d > m) {
        for (int i = 1; i <= m; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return;
    }
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
    return;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[m + 1];
    dep(1, m, n, arr);
    return 0;
}