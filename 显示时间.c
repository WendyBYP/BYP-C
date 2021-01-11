#include <stdio.h>
#include <time.h>
int judgeyear(long long a, int *year)
{
    int b = ((a - 94694400) / 126230400); //b记录经过几个闰年,94694400=(365*2+366)*24*3600 126230400=(365*3+366)*24*3600
                                          //   printf("%ld\n", a);
                                          //  printf("%d\n", b);
    int c = a - 94694400 - 126230400 * b; //c指最后一个4年还有多少秒
                                          //   printf("%d", c);
    int d = c / 31536000;
    *year = 3 + b * 4 + d;
    return c;
}
void day(int a, int *b)
{
    *b = a / 86400; //24*3600
}
void hour(int a, int b, int *c)
{
    *c = a / 3600 - b * 24;
}
void minute(int a, int b, int c, int *d)
{
    *d = a / 60 - b * 24 * 60 - c * 60;
}

int main()
{
    long long int a = time(NULL);
    //    printf("%d\n", a);
    /*  int b =(( a - 94694400) / 126230400);//b记录经过几个闰年,94694400=(365*2+366)*24*3600 126230400=(365*3+366)*24*3600
    printf("%ld\n", a);
    printf("%d\n", b);
    int c = a - 94694400 - 126230400 * 11;
    printf("%d", c/31536000);
    int d = c / 31536000;
    int year = 3 + b * 4;*/
    int year;
    judgeyear(a, &year);
    // printf("%d\n", year);
    int second = judgeyear(a, &year);
    // printf("%d\n", second);
    int dayleft;
    day(second, &dayleft);
    //  printf("%d\n", dayleft);
    int hourleft;
    hour(second, dayleft, &hourleft);
    //  printf("%d\n", hourleft);
    int minuteleft;
    minute(second, dayleft, hourleft, &minuteleft);
    // printf("%d\n", minuteleft);
    printf("现在是%d年", 1970 + year);
    if (1.0 * dayleft / 365 > 3) //31 29 31 30 31 30 31 31 30 31 30 31
    {
        int dayhave = dayleft - 365 * 3;
        if (31 - dayhave >= 0) //1月
        {
            printf("1月%d号", dayhave + 1);
        }
        else if (60 - dayhave >= 0) //2 months
        {
            printf("2月%d号", dayhave + 1 - 31);
        }
        else if (91 - dayhave >= 0) //3 monyhs
        {
            printf("3月%d号", dayhave + 1 - 60);
        }
        else if (121 - dayhave >= 0) //4yuue
        {
            printf("4月%d号", dayhave + 1 - 91);
        }
        else if (152 - dayhave >= 0) //5 months
        {
            printf("5月%d号", dayhave + 1 - 121);
        }
        else if (182 - dayhave >= 0) //6
        {
            printf("6月%d号", dayhave + 1 - 152);
        }
        else if (213 - dayhave >= 0) //7月
        {
            printf("7月%d号", dayhave + 1 - 182);
        }
        else if (244 - dayhave >= 0) //8月
        {
            printf("8月%d号", dayhave + 1 - 213);
        }
        else if (274 - dayhave >= 0) //9
        {
            printf("9月%d号", dayhave + 1 - 244);
        }
        else if (305 - dayhave >= 0) //10
        {
            printf("10月%d号", dayhave + 1 - 274);
        }
        else if (335 - dayhave >= 0) //11
        {
            printf("11月%d号", dayhave + 1 - 305);
        }
        else if (366 - dayhave >= 0) //12
        {
            printf("12月%d号", dayhave + 1 - 335);
        }
    }
    else
    {
        int dayhave = dayleft - 365 * (int)(dayleft / 365);
        if (31 - dayhave >= 0) //1月
        {
            printf("1月%d号", dayhave + 1);
        }
        else if (59 - dayhave >= 0) //2 months
        {
            printf("2月%d号", dayhave + 1 - 31);
        }
        else if (90 - dayhave >= 0) //3 monyhs
        {
            printf("3月%d号", dayhave + 1 - 59);
        }
        else if (120 - dayhave >= 0) //4yuue
        {
            printf("4月%d号", dayhave + 1 - 90);
        }
        else if (151 - dayhave >= 0) //5 months
        {
            printf("5月%d号", dayhave + 1 - 120);
        }
        else if (181 - dayhave >= 0) //6
        {
            printf("6月%d号", dayhave + 1 - 151);
        }
        else if (212 - dayhave >= 0) //7月
        {
            printf("7月%d号", dayhave + 1 - 181);
        }
        else if (243 - dayhave >= 0) //8月
        {
            printf("8月%d号", dayhave + 1 - 212);
        }
        else if (273 - dayhave >= 0) //9
        {
            printf("9月%d号", dayhave + 1 - 243);
        }
        else if (304 - dayhave >= 0) //10
        {
            printf("10月%d号", dayhave + 1 - 273);
        }
        else if (334 - dayhave >= 0) //11
        {
            printf("11月%d号", dayhave + 1 - 304);
        }
        else if (365 - dayhave >= 0) //12
        {
            printf("12月%d号", dayhave + 1 - 334);
        }
    }

    printf("%d点%d分", hourleft + 8, minuteleft);

    return 0;
}

