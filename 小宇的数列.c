#include <stdio.h>
int main()
{
    int a[256][5];
    int i;
    int number = 0;
    for (i = 0; i < 256; i++) //输入循环，若输入不为00000，则继续输入
    {
        scanf("%d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
        number++;
        if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0 && a[i][3] == 0 && a[i][4] == 0)
        {
            break;
        }
    }
    float q;
    int j, d;
    for (j = 0; j < number; j++)
    {
        if (a[j][0] == 0 && a[j][1] == 0 && a[j][2] == 0 && a[j][3] == 0 && a[j][4] == 0)
        {
            continue;
        }
        if (a[j][0] - a[j][1] == a[j][1] - a[j][2] && a[j][2] - a[j][3] == a[j][3] - a[j][4])
        {
            d = a[j][1] - a[j][0];
            printf("case one\n");
            printf("%d %d %d %d %d\n", a[j][4] + d, a[j][4] + 2 * d, a[j][4] + 3 * d, a[j][4] + 4 * d, a[j][4] + 5 * d);
        }
        q = 1.0 * a[j][1] / a[j][0];
        if (1.0 * a[j][4] == q * a[j][3] && 1.0 * a[j][3] == q * a[j][2] && 1.0 * a[j][2] == q * a[j][1])
        {
            printf("case two\n");
            printf("%.0f %.0f %.0f %.0f %.0f\n", q * a[j][4], q * q * a[j][4], q * q * q * a[j][3], q * q * q * q * a[j][4], q * q * q * q * q * a[j][4]);
        }
        if (a[j][2] == a[j][1] + a[j][0] && a[j][4] == a[j][2] + a[j][3])
        {
            printf("case three\n");
            printf("%d %d %d %d %d", a[j][4] + a[j][3], 2 * a[j][4] + a[j][3], 3 * a[j][4] + 2 * a[j][3], 5 * a[j][4] + 3 * a[j][3], 8 * a[j][4] + 5 * a[j][3]);
        }
    }
    return 0;
}
