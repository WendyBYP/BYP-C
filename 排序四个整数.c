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
			b = t;//a,b�������ݣ�ʹa<b
		}
		if (a > c)
		{
			t = a;
			a = c;
			c = t;//a,c�������ݣ�ʹa<c 
		}
		if (a > d)
		{
			t = a;
			a = d;
			d = t;//a,d�������ݣ�ʹa<d
		}
		if (b > c)
		{
			t = b;
			b = c;
			c = t;//b,c�������ݣ�ʹb<c
		}
        if (b > d)
		{
		 	t = b;
			b = d;
			d = t;//b,d�������ݣ�ʹb<d
		}
        if (c > d)
		{
			t = c;
			c = d;
			d = t;//c,d�������ݣ�ʹc<d
		}
		printf("%d %d %d %d\n",a,b,c,d);
	}
	return 0;
}
