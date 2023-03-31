#include <stdio.h>

char selfnum[10001]; // 0 is self num

int main() {
	int tem, t;
    for (int i = 1; i <= 10000; i++) {
		tem = i;
		if (!selfnum[i])
			printf("%d\n", i);
		while (!selfnum[tem]++ && tem <= 10000) {
			t = tem;
			while (t > 0) {
				tem += t % 10;
				t /= 10;
			}
		}
	}
	return 0;
}