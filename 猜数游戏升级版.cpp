#include<iostream>
#include<cstdlib>//x=rand()%100
#include<time.h>//srand(time(0))
using namespace std;
int main()
{
	int x,y,count,score=0,a;
	while(1)
	{
		srand(time(0));//时间种子 
		x=rand()%100;//x=rand()随机产生一个较大的数 
		count=0;
		while(1)
		{
			
			cout<<"请输入一个0-100之间的数"<<endl;
			cin>>y;
			if(x>y)
			{
				cout<<"您输小了"<<endl;
				count++; 
			}
			if(x<y)
			{
				cout<<"您输大了"<<endl;
				count++; 
			}
			if(x==y)
			{
				count++;
				cout<<"恭喜您，猜中了！"<<endl;
				cout<<"您总共猜了"<<count<<"次"<<endl; 
				if(count<5)
				{
					score=score+5;
				}
				if(count>5)
				{
					score=score-1;
				}
				break;
			}
		}
		cout<<"您还玩吗？（玩，请输1；不玩，请输0）" <<endl;
		cin>>a;
		if(a==0)
		{
			cout<<"您的分数为"<<score; 
			break;
		}
		if(a==1)
		{
			continue;
		}
	}
	return 0;
}
