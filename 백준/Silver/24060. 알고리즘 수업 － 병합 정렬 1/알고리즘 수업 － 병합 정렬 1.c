#include <stdio.h>

void merge(int *arr, int left, int mid, int right, int k) {
    int t = 1, mid_tem = mid++, left_tem = left;
    int arr_tem[right - left + 2];

    while (left <= mid_tem && mid <= right) {
        if (arr[left] <= arr[mid])
            arr_tem[t++] = arr[left++];
        else
            arr_tem[t++] = arr[mid++];
    }
    while (left <= mid_tem)
        arr_tem[t++] = arr[left++];
    while (mid <= right)
        arr_tem[t++] = arr[mid++];
    t = 1;
    while (left_tem <= right) {
        arr[0]++;
        if (arr[0] == k)
            printf("%d", arr_tem[t]);
        arr[left_tem++] = arr_tem[t++];
    }
}

void merge_sort(int *arr, int left, int right, int k) {
    int mid;
    if (left < right) {
        mid = (left + right) / 2;
        merge_sort(arr, left, mid, k);
        merge_sort(arr, mid + 1, right, k);
        merge(arr, left, mid, right, k);
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n + 1];
    arr[0] = 0;
    for (int i = 1; i <= n; i++)
        scanf("%d", &arr[i]);
    merge_sort(arr, 1, n, k);
    if (arr[0] < k)
        printf("-1");
    return 0;
}