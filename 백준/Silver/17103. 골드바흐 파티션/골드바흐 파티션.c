#include <stdio.h>
#include <stdbool.h>

bool arr[1000000];
int prime_arr[78498];
int count;

void set_prime() {
	arr[0] = arr[1] = 1;
    for (int i = 2; i < 1000; i++)
        if (!arr[i])
            for (int j = i + i; j <= 1000000; j += i)
				arr[j] = 1;	
	count = 0;
	for (int i = 2; i < 1000000; i++)
		if (!arr[i])
			prime_arr[count++] = i;
}

int main() {
    int t, n;
    scanf("%d", &t);
    set_prime();
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