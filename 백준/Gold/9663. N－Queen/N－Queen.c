#include <stdio.h>

void put_queen(int dep, int *queen, int n) {
    if (dep > n)
        queen[0]++;
    else {
        for (int i = 1; i <= n; i++) {
			queen[dep] = i;
			for (int j = 1; queen[dep] && j < dep; j++) {
				if (i == queen[j])
					queen[dep] = 0;
				else if (j - dep == queen[j] - i || j - dep == -queen[j] + i)
					queen[dep] = 0;
			}
			if (queen[dep])
				put_queen(dep + 1, queen, n);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int queen[n + 1];
    queen[0] = 0;
    put_queen(1, queen, n);
	printf("%d\n", queen[0]);
	return 0;
}