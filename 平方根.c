#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	int a;
		double b;
		scanf("%d",&a);
		if(a>=0)
		{b=sqrt((double)a);
		 printf("%.2f\n",b);
	    }
	   else
	     printf("ERROR\n");
	} 
	return 0;
}
