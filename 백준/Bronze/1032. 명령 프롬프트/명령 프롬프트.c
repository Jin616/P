#include <stdio.h>
#include <string.h>

void cmp (char *s1, char *s2);

int main() {
    int n;
    scanf("%d", &n);
    char name[n + 1][51];
     
    for (int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        if (i == 0) {
            strcpy(name[n], name[i]);
        } else {
            cmp(name[n], name[i]);
        }
    }
    printf("%s", name[n]);
    return 0;
}

void cmp (char *s1, char *s2) {
    while (*s1) {
        if (*s1 != *s2)
            *s1 = '?';
        s1++;
        s2++;
    }
}