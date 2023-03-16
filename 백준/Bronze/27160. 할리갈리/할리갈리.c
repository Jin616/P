#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d", &n);
    char str[11];
    int arr[4] = {0, 0, 0, 0};
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", str, &t);
        if (str[0] == 'S')
            arr[0] += t;
        else if (str[0] == 'B')
            arr[1] += t;
        else if (str[0] == 'L')
            arr[2] += t;
        else if (str[0] == 'P')
            arr[3] += t;
    }
    for (int i = 0; i < 4; i++)
        if (arr[i] == 5) {
            printf("YES");
            return (0);
        }
    printf("NO");
    return (0);
}