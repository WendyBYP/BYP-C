#include <stdio.h>
int main()
{
	int T,i,p;
	int a,b;
	scanf("%d\n",&T);
	for(i=0;i<T;i++)
	{
		scanf("%d %d",&a,&b);
    	int c,d,e,n;
    	{
			p=0;
    		if(a>=100&&a<=999&&b>=100&&b<=999&&a<=b)
    		{
    			for(n=a;n<=b;n++)
				{
         			c=n/100;
         			d=n%10;
         			e=n/10%10;
         			if(n==c*c*c+d*d*d+e*e*e)
		 			{
          				printf("%d ",n);
          				p++;
          			}
        		}
        	}
        	if(p==0)
        	{
        		printf("-1");
        	} 
		}
		printf("\n");
    }
    return 0; 
}
