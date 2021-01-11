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
		cout<<"请输入一个0-100之间的数";
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
			cout<<"您总共猜了"<<count<<"次"; 
			break;
		}
	}
	return 0;
}
