#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool arr[1000001];

int main() {
    long long min, max, count = 0, i, j;
    scanf("%lld%lld", &min, &max);
	for (i = 2; i*i <= max; i++)
		for (j = ceil((double)min/(i*i)); i*i*j <= max; j++)
			if(i*i*j >= min && !arr[i*i*j - min] && ++count)
				arr[i*i*j - min] = 1;
	printf("%lld\n", max - min - count + 1, count);
	return 0;
}