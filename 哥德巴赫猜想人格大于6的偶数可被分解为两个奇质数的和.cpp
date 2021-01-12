#include<stdio.h>
/*int sushu(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
			return 0;
		}
		else return 1;
	}
}*/
int main()
{
	int n,a,b,i,j,c=0;
	scanf("%d",&n);
	//int shu[n];
	if(n%2==0&&n>6)
	{
		for(j=3;j<n/2;j+=2)
		{
			if(sushu(j)&&sushu(n-j))
			for(b=2;b<a;b++)
			{
				if(a%b!=0)
				
			}	
			c=c+1;
			for (i=0;i<c;i++)
			{
				shu[i]=a;//ÕÒËØÊý 
			}
		}	
		for(i=0;i<c;i++)
		{
			for(j=i;i<c;j++)
			{
				if(n==shu[i]+shu[j])
				printf("%d %d\n",shu[i],shu[j]);
			}
		}
	}
	else printf("ERROR");
	return 0;
}
