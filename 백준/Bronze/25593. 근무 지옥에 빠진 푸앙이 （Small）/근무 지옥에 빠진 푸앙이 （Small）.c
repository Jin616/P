#include <stdio.h>
#include <string.h>

int main()
{
    char emp[100][21], tem[21];
    int slave[100];
    for (int i = 0; i < 100; i++) {
        slave[i] = 0;
        emp[i][0] = 0;
    }
    int n, max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 7; k++) {
                scanf("%s", tem);
                if (tem[0] == '-')
                    continue;
                for (int l = 0; l < 100; l++)
                {
                    if (emp[l][0] == 0 || !strcmp(emp[l], tem))
                    {
                        strcpy(emp[l], tem);
                        if (j == 0 || j == 2)
                            slave[l] += 4;
                        else if (j == 1)
                            slave[l] += 6;
                        else
                            slave[l] += 10;
                        if (max < slave[l])
                            max = slave[l];
                        break;
                    }
                }
            }
    for (int i = 0; i < 100 && slave[i] != 0; i++)
        if (max - slave[i] > 12)
        {
            printf("No");
            return (0);
        }
    printf("Yes");
    return (0);
}