#include<stdio.h>
int main()
{
	int i,n,a[100];
	double b,s=0;
	scanf("%d",&n);
	if(n<=100&&n>=1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d ",&a[i]);
			s=s+a[i];
		}
		b=s/n;
		printf("%.2f",b);
	}
}
