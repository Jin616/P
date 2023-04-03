#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    char *s1 = (char *)a;
    char *s2 = (char *)b;
    int i = 0;
    if (strlen(s1) != strlen(s2))
        return (strlen(s1) - strlen(s2));
    while (s1[i] && s2[i])
        if (s1[i] != s2[i] || !++i)
            return (s1[i] - s2[i]);
    return 0;
}

void swap(char **s1, char **s2) {
    char *tem = *s1;
    *s1 = *s2;
    *s2 = tem;
}

int partition(char **str, int start, int end) {
    char *pivot = str[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++) {
        if (cmp(str[j], pivot) <= 0) {
            i++;
            if (cmp(str[j], pivot) == 0)
                str[j][0] = 0;
            swap(&str[i], &str[j]);
        }
    }
    swap(&str[i + 1], &str[end]);
    return (i + 1);
}

void quick_sort(char** str, int start, int end) {
    if (start < end) {
        int p = partition(str, start, end);

        quick_sort(str, start, p - 1);
        quick_sort(str, p + 1, end);
    }
}

int main() {
    int n;
    char str[20001][51] = {0}, prev[51] ="";
    scanf("%d", &n);
    //str = (char **)malloc(n*sizeof(char *));
    for (int i = 0; i < n; i++) {
        //str[i] = (char *)malloc(51*sizeof(char *));
        scanf("%s", str[i]);
    }
    qsort(str, n, sizeof(char) * 51, cmp);
    //quick_sort(str, 0, n - 1);
    for (int i = 0; i < n; i++) {
        if(strcmp(str[i], prev) == 0)
			continue;
		printf("%s\n", str[i]);
		strcpy(prev, str[i]);
        //free(str[i]);
    }
    //free(str);
    return 0;
}