#include <stdio.h>
#include <stdbool.h>

bool arr[1000001];

int main() {
    long long min, max, count, i = 2;
    scanf("%lld%lld", &min, &max);
	count = 0;
	while (i <= max / i) {
		for (long long k = min/(i*i); i*i*k <= max; k++)
			if(i*i*k >= min && !arr[i*i*k - min]) {
				arr[i*i*k - min] = 1;
				count++;
			}
		i++;
	}
	printf("%lld\n", max - min - count + 1, count);
	return 0;
}