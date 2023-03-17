#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m, t;
    while (scanf("%d %d", &n, &m) == 2) {
        if (n == 0 && m == 0) {
            break;
        }
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        int count = 0;
        for (int i = 0; i < m; i++) {
            scanf("%d", &t);
            int index = binarySearch(arr, n, t);
            if (index != -1) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}