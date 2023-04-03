#include <stdio.h>

char s[32];

int main() {
    int n = 0, b;
    scanf("%s%d", s, &b);
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'A')
            n = b*n + s[i] - 'A' + 10;
        else
            n = b*n + s[i] - '0';
    printf("%d", n);
}