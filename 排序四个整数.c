#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n); 
	for(i=0;i<n;i++)
	{
		int a,b,c,d;
		int t;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		if (a > b)
		{
			t = a;
			a = b;
			b = t;//a,b交换数据，使a<b
		}
		if (a > c)
		{
			t = a;
			a = c;
			c = t;//a,c交换数据，使a<c 
		}
		if (a > d)
		{
			t = a;
			a = d;
			d = t;//a,d交换数据，使a<d
		}
		if (b > c)
		{
			t = b;
			b = c;
			c = t;//b,c交换数据，使b<c
		}
        if (b > d)
		{
		 	t = b;
			b = d;
			d = t;//b,d交换数据，使b<d
		}
        if (c > d)
		{
			t = c;
			c = d;
			d = t;//c,d交换数据，使c<d
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
	return 0;
}
