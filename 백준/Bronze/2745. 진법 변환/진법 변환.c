#include <stdio.h>

int main() {
    char num[32];
    int n = 0, b;
    scanf("%s%d", num, &b);
    for (int i = 0; num[i]; i++)
        if (num[i] >= 'A')
            n = b*n + num[i] - 'A' + 10;
        else
            n = b*n + num[i] - '0';
    printf("%d", n);
    return 0;
}