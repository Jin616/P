#include <stdio.h>

int main() {
    int t, n, arr[41];
    scanf("%d", &t);
    arr[0] = 1; arr[1] = 1;
    for (int i = 2; i < 41; i++)
        arr[i] = arr[i-1] + arr[i-2];
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        if(n <= 1)
            printf("%d %d\n", 1-n, n);
        else
            printf("%d %d\n", arr[n-2], arr[n-1]);
    }
    return 0;
}