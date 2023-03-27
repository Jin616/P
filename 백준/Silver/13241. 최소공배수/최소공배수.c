#include <stdio.h>

int main() {
    long long answer = 1, i = 2, a, b;
    scanf("%lld %lld", &a, &b);
    while (i <= a || i <= b) {
        if (a % i == 0 && b % i == 0) {
            a /= i; b /= i;
            answer *= i;
        } else if (a % i == 0) {
            a /= i;
            answer *= i;
        } else if (b % i == 0) {
            b /= i;
            answer *= i;
        } else {
            i++;
        }
    }
    printf("%lld", answer);
    return 0;
}