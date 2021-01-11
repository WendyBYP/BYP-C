#include <stdio.h>
void convert(int *a, int b)
{
    int i;
    for (i = 0; i < b; i++)
    {
        a[i] = a[i] ^ 31337;
    }
}
void decode(int *a, char *b, int c)
{
    int i;
    for (i = 0; i < c; i++)
    {
        b[2 * i] = a[i] >> 8;
        b[2 * i + 1] = a[i] & 0xff;
    }
}
int main()
{
    int i;
    int secret[] = {15643, 6913, 6916, 23040, 2377, 6985, 6408, 3657, 5638, 3084, 2119, 15910, 23079, 13629, 23101, 10300, 10557, 23073, 13092, 23369};
    int length = sizeof(secret) / sizeof(secret[0]);
    convert(secret, length);
    //   printf("%d", secret[0]);
    char result[2 * length];
    decode(secret, result, length);
    //   printf("%c%c", result[0], result[1]);
    for (i = 0; i < length * 2; i++)
    {
        printf("%c", result[i]);
    }
}
