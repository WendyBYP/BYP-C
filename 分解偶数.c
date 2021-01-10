#include<stdio.h>
int sushu(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			break;
		}
	}
	if (i<m)
	return 0;
	else return -1;
}
int main()
{
	int n,j;
	scanf("%d",&n);
	if(n%2==0&&n>6)
	{
		for(j=3;j<n/2;j+=2)
		{
			if(sushu(j)&&sushu(n-j))
			{
				printf("%d %d\n",j,n-j);
			}
		}
	}
	else printf("ERROR");
	return 0;
}
