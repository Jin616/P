#include <stdio.h>

int main() {
    int num[2][2], tem, i = 2;
    scanf("%d %d\n%d %d", &num[0][0], &num[0][1], &num[1][0], &num[1][1]);
    tem = num[0][1];
    num[0][0] *= num[1][1];
    num[0][1] *= num[1][1];
    num[0][0] += num[1][0] * tem;
    while (i <= num[0][0] && i <= num[0][1]) {
        if (num[0][0] % i == 0 && num[0][1] % i == 0) {
            num[0][0] /= i;
            num[0][1] /= i;
        } else {
            i++;
        }
    }
    printf("%d %d", num[0][0], num[0][1]);
    return 0;
}