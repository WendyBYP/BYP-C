#include<stdio.h>
int age(int x,int y,int z)//������С�����������һ��С������䣬С�������� 
{
	if(x==1)//������С������� 
    {
        return y; //�ݹ����,���ֻ��һ���˵Ļ�������Ϊy 
    } 
	else 
	    return age(x-1,y,z)+z;
}
int main()
{
	int n,a,k,yearsold;
	//�������С�����������һ��С������������ڱ��С���������
	scanf("%d%d%d",&n,&a,&k);
	if(n<2||n>100||a>100||k>100||a<=0||k<=0)//"||"����� 
	{
		printf("Wrong Number");
    }
	else 
	{
		yearsold=age(n,a,k);
		printf("%d",yearsold);//d:ʮ���� 
	}
	return 0;
} 
