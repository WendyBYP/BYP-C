#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int i=0,j=0,k=0,a=0,b=0,m=0,n=0,p=0,q=0,r=0,t=0;
	int c[100]={0},d[100]={0};
	char x[1000]={0},y[100][10]={0};
	while(scanf("%c",&x[i])!=EOF)
		i++;
	a=strlen(x);
	for(i=0;i<a;i++)
	{if(x[i]>'A'&&x[i]<'Z')
	 x[i]=x[i]+32;
    }
	for(i=0;i<a;i++)
	{
		if(x[i]>'A'&&x[i]<'z')
		{y[j][k]=x[i];
		 k++;
		}
		else if(x[i+1]>'A'&&x[i+1]<'z')
		{k=0;
		 j++;//jµ¥´ÊÊý 
		}	
	}
	j++;
		
	for(m=0;m<j;m++)
	{	for(n=m+1;n<j;n++)
		{
			if(strcmp(y[m],y[n])==0)
			{c[m]++;
			}
		}
	}
	for(r=0;r<j;r++)
	{d[r]=c[r];
	}
		for(p=0;p<j;p++)
			for(q=p+1;q<j;q++)
			{if(c[p]<c[q])
			 {t=c[p];
			  c[p]=c[q];
			  c[q]=t;
			 }
			}
	for(r=0;r<j;r++)
	{if(d[r]==c[0])
	 break;
	}
	printf("%s %d\n",y[r],c[0]+1);	
			
	return 0;
}
