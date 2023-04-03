#include <stdio.h>

int i, b;
char s[32];

void itoa(int n) {
    if (n > b-1)
        itoa(n / b);
    if (n%b > 9)
        s[i++] = n%b + 'A' - 10;
    else
        s[i++] = n%b + '0';
}

int main() {
    int n;
    scanf("%d%d", &n, &b);
    itoa(n);
    s[i] = 0;
    printf("%s", s);
    return 0;
}