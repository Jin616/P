#include <stdio.h>
#include <math.h>

void hanoi(int n, int start, int waypoint, int dest) {
    if(n > 2) {
        hanoi(n - 1, start, dest, waypoint);
        printf("%d %d\n", start, dest);
        hanoi(n - 1, waypoint, start, dest);
    }
    else {
        if(n == 2) {
            printf("%d %d\n", start, waypoint);
            printf("%d %d\n", start, dest);
            printf("%d %d\n", waypoint, dest);
        }
        else if (n == 1) {
            printf("%d %d\n", start, dest);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int) pow(2, n) - 1);
    hanoi(n, 1, 2, 3);
    return 0;
}