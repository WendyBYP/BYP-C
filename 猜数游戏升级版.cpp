#include<iostream>
#include<cstdlib>//x=rand()%100
#include<time.h>//srand(time(0))
using namespace std;
int main()
{
	int x,y,count,score=0,a;
	while(1)
	{
		srand(time(0));//ʱ������ 
		x=rand()%100;//x=rand()�������һ���ϴ���� 
		count=0;
		while(1)
		{
			
			cout<<"������һ��0-100֮�����"<<endl;
			cin>>y;
			if(x>y)
			{
				cout<<"����С��"<<endl;
				count++; 
			}
			if(x<y)
			{
				cout<<"�������"<<endl;
				count++; 
			}
			if(x==y)
			{
				count++;
				cout<<"��ϲ���������ˣ�"<<endl;
				cout<<"���ܹ�����"<<count<<"��"<<endl; 
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
		cout<<"�������𣿣��棬����1�����棬����0��" <<endl;
		cin>>a;
		if(a==0)
		{
			cout<<"���ķ���Ϊ"<<score; 
			break;
		}
		if(a==1)
		{
			continue;
		}
	}
	return 0;
}
