#include<stdio.h>
int main ()
{
	restart:int i,n,j;
	int max,min,temp=0,tempmax,tempmin;
	scanf("%d",&n);
	int a[n],stu[n];
	if (n>=1&&n<=100)
	{
		printf("%d\n",n);	
		struct stuinfo
		{
			char name;
			char id[17];
			char score;
			int realscore;
		}
		for(i=0;i<n;i++)
		{
		restart1:struct stuinfo stu[i];
		scanf("%s",&stu[i].name);
		for(j=0;j<18;j++)
		{
			scanf("%1s",&stu[i].id[j]);
		}
		scanf("%s",&stu[i].score);
		if (sizeof(stu[i])>80){
			printf ("姓名长度不合法，请再次输入\n");
			goto restart1;
			}
			else if( stu[i].score != *"n/a"){
				stu[i].realscore = stu[i].score - 48;
				if(stu[i].realscore >= 0 && stu[i].realscore <= 100)
				continue;
				else {
					printf ("分数不合法，请再次输入\n");
					goto restart1;
				}
			}
			else if( stu[i].score == *"n/a")
				stu[i].score = *"\0";
			
			if(i>=1){
				max = stu[i-1].score;
				min = stu[i-1].score;
				if(stu[i].score > stu[i-1].score){
					max = stu[i].score;	
					tempmax = i;			
				}
				else if(stu[i].score = stu[i-1].score){
					temp++;			
				}
				else if(stu[i].score < stu[i-1].score){
					min = stu[i].score;		
					tempmin = i;	
				}
			}	
		printf("%s %s",stu[tempmax].name,stu[tempmax].id);
		printf("\n");
		printf("%s %s",stu[tempmin].name,stu[tempmin].id);	
		}
		
}
else
printf ("n不合法，请再次输入\n");
goto restart;
return 0;	
}
