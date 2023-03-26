#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while (a !=0 && b != 0 && c != 0) {
        if(a + b <= c || b + c <= a || a + c <= b)
            printf("Invalid\n");
        else if (a == b && b == c && c == a)
            printf("Equilateral\n");
        else if (a != b && a != c && b != c)
            printf("Scalene\n");
        else if (a == b || a == c || b == c)
            printf("Isosceles\n");
        scanf("%d %d %d", &a, &b, &c);
    }
    return 0;
}