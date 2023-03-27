#include <stdio.h>

int main() {
    long long n, nbr, j;
    scanf("%lld", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &nbr);
        if (nbr <= 1) {
            printf("2\n");
            continue;
        }
        while (1) {
            j = 2;
            while (j <= nbr / j) {
                if (nbr % j == 0)
                    break;
                else
                    j++;
            }
            if (j > nbr / j) {
                printf("%lld\n", nbr);
                break;
            } else {
                nbr++;
            }
        }
    }
    return 0;
}