#include <stdio.h>

int main() {
    int max = -1, tem, answer;
    for (int i = 0; i < 81; i++) {
        scanf("%d", &tem);
        if (max < tem) {
            max = tem;
            answer = i;
        }
    }
    printf("%d\n%d %d", max, answer/9+1, answer%9+1);
    return 0;
}