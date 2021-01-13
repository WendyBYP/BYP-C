#include<stdio.h>
int main()
{
        int a[5]={3,1,5,4,2};
        int i,j,t;
        for(i=0;i<4;i++)
        {
                for(j=0;j<4-i;j++)
                {
                        if(a[j]>a[j+1])
                        {
                                t=a[j];
                                a[j]=a[j+1];
                                a[j+1]=t;
                        }
                }
        }
        for(i=0;i<5;i++)
        {
             printf("%d",a[i]);
        }
}
