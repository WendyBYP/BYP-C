#include<stdio.h>
#include<math.h>
int main()
{
	int m,i,c,d;
	scanf("%d",&m);
	//unsigned long long 
	int a[20],b[20];
	for (i=0;i<m;i++)
	{
		scanf(" %d",&a[i]);
		b[i]=abs(a[i]);
	}
	c=a[0];
	d=b[0];
	for (i=1;i<m;i++)
	{
		if(b[i]>d)
		{
			d=b[i];
			c=a[i];
		}
	} 
	printf("%d",c);
	return 0;
}
