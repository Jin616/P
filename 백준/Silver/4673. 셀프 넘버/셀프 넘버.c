#include <stdio.h>

char buf[50000];
char selfnum[100001]; // 0 is self num
int idx;

void buf_write(int i) {
	if (i > 0) {
		buf_write(i / 10);
		buf[idx++] = i % 10 + '0';
	}
}

void is_selfnum(int i) {
	int tem;
	tem = i;
	while (i > 0) {
		tem += i % 10;
		i /= 10;
	}
	if (tem <= 10000 && !selfnum[tem]++)
		is_selfnum(tem);
}

int main() {
	idx = 0;
    for (int i = 1; i <= 10000; i++) {
		if (selfnum[i])
			continue;
		buf_write(i);
		buf[idx++] = '\n';
        is_selfnum(i);
    }
	printf("%s", buf);
	return 0;
}