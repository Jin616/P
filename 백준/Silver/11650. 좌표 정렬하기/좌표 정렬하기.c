#include <stdio.h>

typedef struct {
    int x;
    int y;
} pos;

int cmp(pos *p1, pos *p2) {
    if (p1->x == p2->x && p1->y > p2->y)
        return 1;
    if (p1->x > p2->x)
        return 1;
    return 0;
}

void input(pos *d, pos *s) {
    d->x = s->x;
    d->y = s->y;
}

void merge(pos *p, int l, int m, int r) {
    int i = l, j = m + 1, k = 0;
    pos tem[r - l + 1];

    while (i <= m && j <= r) {
        if (cmp(&p[i], &p[j]))
            input(&tem[k++], &p[j++]);
        else
            input(&tem[k++], &p[i++]);
    }
    while (i <= m)
        input(&tem[k++], &p[i++]);
    while (j <= r)
        input(&tem[k++], &p[j++]);
    for (i = 0; i < k; i++)
        input(&p[l+i], &tem[i]);
}

void merge_sort(pos *p, int l, int r) {
    int m;
    if (l < r) {
        m = (l + r) / 2;
        merge_sort(p, l, m);
        merge_sort(p, m + 1, r);
        merge(p, l, m, r);
    }
}

int main() {
    int n;
    pos p[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d%d", &p[i].x, &p[i].y);
    merge_sort(p, 0, n - 1);
    for (int i = 0; i < n; i++)
        printf("%d %d\n", p[i].x, p[i].y);
    return 0;
}