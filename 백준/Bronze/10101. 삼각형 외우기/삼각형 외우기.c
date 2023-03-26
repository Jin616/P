#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    if(a + b + c != 180)
        printf("Error");
    else if (a == 60 && b == 60 && c == 60)
        printf("Equilateral");
    else if (a + b + c == 180 && (a != b && a != c && b != c))
        printf("Scalene");
    else if (a + b + c == 180 && (a == b || a == c || b == c))
        printf("Isosceles");
    return 0;
}