#include <stdio.h>

int cmp(char *str, char *rev);
void revstr(char *dest, char *src, int len);
int getlen(char *str);

int main() {
    int n, t;
    scanf("%d", &n);

    char str[n][14];
    char rev[n][14];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        revstr(rev[i], str[i], getlen(str[i]));
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            t = cmp(str[i], rev[j]);
            if (t != 0) {
                printf("%d %c", t, str[j][t / 2]);
                return (0);
            }
        }
    }
    return (0);
}

int cmp(char *str, char *rev) {
    int i;
    for (i = 0; i < 14 && str[i]; i++)
        if (str[i] != rev[i])
            return (0);
    return (i);
}

void revstr(char *dest, char *src, int len) {
    for (int i = 0; i < 14 && src[i]; i++)
    {
        dest[len] = 0;
        dest[len - 1 - i] = src[i];
    }
}

int getlen(char *str) {
    int len = 0;
    while (str[len])
        len++;
    return (len);
}