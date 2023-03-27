#include <stdio.h>

int arr[1000000];
int prime_arr[78498];

void set_prime(int *arr, int *prime_arr) {
    int count = 0;
	arr[0] = arr[1] = 1;
    for (int i = 2; i < 1000; i++)
        if (!arr[i])
            for (int j = i + i; j <= 1000000; j += i)
				arr[j] = 1;
	for (int i = 2; i < 1000000; i++)
		if (!arr[i])
			prime_arr[count++] = i;
}

int main() {
    int t, n, count;
    scanf("%d", &t);
    set_prime(arr, prime_arr);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        count = 0;
        for (int j = 0; prime_arr[j] <= n / 2; j++)
            if(!arr[n - prime_arr[j]])
                count++;
        printf("%d\n", count);
    }
    return 0;
}