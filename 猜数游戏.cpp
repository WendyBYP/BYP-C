#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{
	int x,y,count=0;
	srand(time(0));
	x=rand()%100; 
	while(1)
	{
		cout<<"������һ��0-100֮�����";
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
			cout<<"���ܹ�����"<<count<<"��"; 
			break;
		}
	}
	return 0;
}
