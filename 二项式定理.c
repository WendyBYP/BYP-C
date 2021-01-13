#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//阶乘
int factorial(int i){
    if(i==1 || i==0)
        return 1;
    else
        return i*factorial(i-1);

}

//排列数公式
int C(int n,int k){
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int main()
{
    int n=3,a=1,x=2;
    int result =0;
    for (k=0;k<n+1;k++){
        result += C(n,k)*pow(x,k)*pow(a,n-k);
    }
    printf("%d",result);
    return 0;
}

