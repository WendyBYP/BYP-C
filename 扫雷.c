#include<stdio.h>
int main(int argc, char const *argv[])
{
	int T,n,m,i,s,j,x,y;
	scanf("%d",&T);
	
	int hang[]={-1,-1,0,1,1,1,0,-1};
 	int lie[]={0,1,1,1,0,-1,-1,-1};
	char ch;
	for (s = 0; s < T; s++)
	{
		int map[105][105]={0};
		int flag[105][105]={0};
		scanf("%d%d",&n,&m);
		getchar();
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				scanf("%c",&ch);
				if(ch=='*')
					flag[i][j]=1;
				else
					flag[i][j]=0;
			}
			getchar();
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(!flag[i][j]) 
				{
					for(int k=0;k<8;k++)
					{
						x=i+hang[k];y=j+lie[k];
						if(flag[x][y])
							 ++map[i][j];
					}
				}
			}
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(flag[i][j])
					printf("*");
				else
					printf("%d",map[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

