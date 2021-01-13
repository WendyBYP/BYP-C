#include<stdio.h>
 
const int maxn=105;
 
int a[maxn][maxn],b[maxn][maxn];
int ans[maxn][maxn];
int a_n,a_m,b_n,b_m;
 
void mul(){
    for(int i=0;i<a_m;i++){
        for(int j=0;j<b_n;j++){
            for(int k=0;k<a_n;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
}
 
int main()
{
    printf("请输入第一个矩阵的行数和列数\n");
    scanf("%d%d",&a_m,&a_n);
    for(int i=0;i<a_m;i++)
        for(int j=0;j<a_n;j++)
            scanf("%d",&a[i][j]);
    printf("请输入第二个矩阵的行数和列数\n");
    scanf("%d%d",&b_m,&b_n);
    for(int i=0;i<b_m;i++)
        for(int j=0;j<b_n;j++)
            scanf("%d",&b[i][j]);
 
    mul();
    printf("结果如下\n");
    for(int i=0;i<a_m;i++){
        for(int j=0;j<b_n;j++){
            printf("%d ",ans[i][j]);
        }
        putchar(10);
    }
    return 0;
}
 
