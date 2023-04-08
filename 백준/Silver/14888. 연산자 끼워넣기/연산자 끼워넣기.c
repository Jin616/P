#include <stdio.h>

#define MAX 1000000000

void do_op(int *arr, int *op, int d, int n) {
    int tem;
    if (d > n) {
        if (arr[0] > arr[n+2])
            arr[n+2] = arr[0];
        if (arr[0] < arr[n+1])
            arr[n+1] = arr[0];
    } else {
        for (int i = 0; i < 4; i++) {
            if (op[i] > 0) {
                tem = arr[0];
                op[i]--;
                if (i == 0) {
                    arr[0] += arr[d];
                    do_op(arr, op, d+1, n);
                } else if (i == 1) {
                    arr[0] -= arr[d];
                    do_op(arr, op, d+1, n);
                } else if (i == 2) {
                    arr[0] *= arr[d];
                    do_op(arr, op, d+1, n);
                } else if (i == 3) {
                    arr[0] /= arr[d];
                    do_op(arr, op, d+1, n);
                }
                op[i]++;
                arr[0] = tem;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n+3], op[4];
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 4; i++)
        scanf("%d", &op[i]);
    arr[0] = arr[1]; arr[n+1] = MAX; arr[n+2] = -MAX;
    do_op(arr, op, 2, n);
    printf("%d\n%d", arr[n+2], arr[n+1]);
    return 0;
}