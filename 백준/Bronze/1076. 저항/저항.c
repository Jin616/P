#include <stdio.h>
#include <math.h>

#define COLOR_SIZE 10;

int reg_color(char **color, char *source);

int main() {
    char *color[10] = {"blac", "brow", "red", "oran", "yell", "gree", "blue", "viol", "grey", "whit"};
    char tem[10];
    long long result = 0;
    for (int t = 0; t < 3; t++) {
        scanf("%s", tem);
        if (t != 2)
            result = result * 10 + reg_color(color, tem);
        else
            for (int i = 0; i < reg_color(color, tem); i++)
                result *= 10;
    }
    printf("%lld", result);
}

int reg_color(char **color, char *source) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            if (color[i][j] != source[j])
                break;
            if (j == 3)
                return (i);
        }
    }
    return (-1);
}