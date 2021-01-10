#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	struct stu
	{
		char name[15];
		char num[18];
		char gra[5];
		int grade;
		int rank;

	}a[105],tem;
	int n,i=0,j=0,l=1,k,m,x,y,count=0,flag=0,q;
	char s[20];
	scanf("%d",&n);
	scanf("%s",s);
	while(i<n)
	{
		a[i].grade=0;
		scanf("%s",a[i].name);
		scanf("%s",a[i].num);
		scanf("%s",a[i].gra);
		if(strcmp(a[i].gra,"n/a")==0)
		{
			a[i].grade=-1;	
		}
		else
		{
			m=strlen(a[i].gra);
			for(k=0;k<m;k++)
			{
				a[i].grade=a[i].grade*10+a[i].gra[k]-'0';
			}
		}
		i++;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].grade>a[j+1].grade)
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
    
	for(i=n-1;i>=0;i--)
	{
		a[i].rank=l;
		if(a[i].grade==a[i-1].grade)
		{
			count++;
		}
		else
		{
		    l=l+count+1;
			count=0;	
		}
	}
	k=0;
	y=strlen(s);
	for(i=0;i<n;i++)
	{
		x=strlen(a[i].name);
		for(j=0;j<y;j++)
		{
			while(k<x)
			{
				if(s[j]==a[i].name[k]) 
				{flag++;k++;break;}
				k++;
			}
			
		}
	    if(flag==y)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	    	{
	    		printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
	    	}
	    }
	    flag=0;
	    k=0;
	}
	for(i=0;i<n;i++)
	{
		x=strlen(a[i].num);
		for(j=0;j<y;j++)
		{
			while(k<x)
			{
				if(s[j]==a[i].num[k]) 
				{flag++;k++;break;}
				k++;
			}
			
		}
	    if(flag==y)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	    	{
	    		printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
	    	}
	    }
	    flag=0;
	    k=0;
	}
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i].gra,s)==0)
	    {
	    	if(a[i].grade!=-1)
	    	{
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s %d\n",a[i].gra,a[i].rank);
			}
	    	else
	        {
			   printf("%s ",a[i].name);
			   for(q=0;q<18;q++)
			   {
			   	printf("%c",a[i].num[q]);
			   }
			   printf(" %s n/a\n",a[i].gra);
			}
	    }
	}
	return 0;
}

