#include<stdio.h>
int main()
{
	int n,i,p[n];
	scanf("%d\n",&n);
    unsigned long long int a[n],b[n],c[n];
	for (i=0;i<n;i++)
	{
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
		getchar();
	}
	for (i=0;i<n;i++)
	{
		if(a[i]>0&&b[i]>0&&c[i]>0)
		{
			if(b[i]>a[i]&&b[i]>c[i]&&b[i]<a[i]+c[i])
			{
				if(b[i]*b[i]==a[i]*a[i]+c[i]*c[i])
				{
					p[i]=1;
				}
				else p[i]=0;
	    	}
	    	if(a[i]>b[i]&&a[i]>c[i]&&a[i]<b[i]+c[i])
	    	{
	    		if(a[i]*a[i]==b[i]*b[i]+c[i]*c[i])
	    		{
	    			p[i]=1;
	    		}
	    		else p[i]=0;
	    	}
	    	if(c[i]>b[i]&&c[i]>a[i]&&c[i]<b[i]+a[i])
	   	 	{
	    		if(c[i]*c[i]==b[i]*b[i]+a[i]*a[i])
	    		{
	    			p[i]=1;
	    		}
	    		else p[i]=0;
	    	}
	    }
	    else p[i]=0;
	}
	for (i=0;i<n-1;i++)
	{
		if(p[i]==1)
		{
			printf("Yes\n");
		}
		else if(p[i]==0)
		{
			printf("No\n");
		}
	}
	if(p[n-1]==1)
	{
		printf("Yes");
	}
	else if(p[n-1]==0)
	{
		printf("No");
	}
	return 0; 
} 
