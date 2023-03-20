#include <stdio.h>

int main() {
    int arr[5], i, count;

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    i = 3;
    while (i++) {
        count = 0;
        for (int j = 0; j < 5; j++) {
            if (i % arr[j] == 0)
                count++;
        }
        if (count >= 3)
            break;
    }
    printf("%d", i);
    return 0;
}