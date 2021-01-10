#include<stdio.h>
int age(int x,int y,int z)//龙门阵小伙伴人数，第一个小伙伴年龄，小伙伴年龄差 
{
	if(x==1)//龙门阵小伙伴人数 
    {
        return y; //递归结束,如果只有一个人的话，年龄为y 
    } 
	else 
	    return age(x-1,y,z)+z;
}
int main()
{
	int n,a,k,yearsold;
	//龙门阵的小伙伴人数、第一个小伙伴的年龄和相邻编号小伙伴的年龄差
	scanf("%d%d%d",&n,&a,&k);
	if(n<2||n>100||a>100||k>100||a<=0||k<=0)//"||"代表或 
	{
		printf("Wrong Number");
    }
	else 
	{
		yearsold=age(n,a,k);
		printf("%d",yearsold);//d:十进制 
	}
	return 0;
} 
