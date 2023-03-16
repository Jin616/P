#include <stdio.h>

int main()
{
    int n, k, l;
    scanf("%d", &n);
    char str[25][26];
    char tem[26];
    for (int i = 0; i < n; i++)
    {
        k = 0; l = 0;
        getchar();
        scanf("%[^\n]s", tem);
        //fgets(tem, sizeof(tem), stdin);
        for (int j = 0; 1; j++)
        {
            if (!tem[j]) {
                str[k][l] = 0;
                break;
            }
            else if (tem[j] == ' ') {
                str[k][l] = 0;
                k++;
                l = 0;
            }
            else {
                str[k][l] = tem[j];
                l++;
            }
        }
        printf("Case #%d: ", i + 1);
        for (; k >= 0; k--)
        {
            printf("%s", str[k]);
            if (k != 0)
                printf(" ");
            else
                printf("\n");
        }
    }
    return (0);
}