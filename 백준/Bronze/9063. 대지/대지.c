#include <stdio.h>

int main() {
    int n, x_min = 10000, x_max = -10000, y_min = 10000, y_max = -10000, x, y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        if (x_min > x)
            x_min = x;
        if (x_max < x)
            x_max = x;
        if (y_min > y)
            y_min = y;
        if (y_max < y)
            y_max = y;
    }
    printf("%d", (y_max - y_min) * (x_max - x_min));
    return 0;
}