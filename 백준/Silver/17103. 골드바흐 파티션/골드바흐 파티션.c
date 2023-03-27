#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime(int n) {
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void set_prime(int *arr) {
    int count = 0, k, tem;
    for (int i = 2; i < 1000000; i++) {
        if (arr[i] == 0 && is_prime(i)) {
            count++;
            k = 1;
            while (i < 1000 && i * k <= 1000000) {
                if (arr[i * k] == 0)
					arr[i * k] = 2;
				k++;
			}
            arr[i] = 1;
        }
        else if (arr[i] == 0)
            arr[i] = 2;
    }
}

int main() {
    int t, n, tem, count, *arr;
	arr = (int *)malloc(sizeof(int) * 1000000);
    scanf("%d", &t);
    set_prime(arr);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        tem = n / 2 - 1;
        count = 0;
        while (++tem < n - 1) {
            if(arr[tem] == 1 && arr[n - tem] == 1)
                count++;
		}
        printf("%d\n", count);
    }
	free(arr);
    return 0;
}