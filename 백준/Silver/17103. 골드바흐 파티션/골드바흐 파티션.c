#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_prime(int n) {
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

void set_prime(int *arr, int *prime_arr) {
    int count = 0, k, tem;
    for (int i = 2; i < 1000000; i++) {
        if (arr[i] == 0 && is_prime(i)) {
			prime_arr[count] = i;
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
    int t, n, tem, count, *arr, *prime_arr;
	arr = (int *)malloc(sizeof(int) * 1000000);
	prime_arr = (int *)malloc(sizeof(int) * 78498);
    scanf("%d", &t);
    set_prime(arr, prime_arr);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        count = 0;
        for (int j = 0; prime_arr[j] <= n / 2; j++)
            if(arr[n - prime_arr[j]] == 1)
                count++;
        printf("%d\n", count);
    }
	free(arr);
	free(prime_arr);
    return 0;
}