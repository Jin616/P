#include <stdio.h>

int main() {
    int t, money;
    int moneys[4] = {25, 10, 5, 1};
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &money);
        for (int j = 0; j < 4; j++) {
            printf("%d ", money / moneys[j]);
            money %= moneys[j];
        }
        printf("\n");
    }
    return 0;
}