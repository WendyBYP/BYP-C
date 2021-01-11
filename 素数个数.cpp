#include<iostream>
#include<string> 
#include<cmath>
using namespace std;
int sushu(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		return 0;
	return 1;
	}
}
int qujian(int x,int y)
{
	int count=0;
	for(int i=x;i<=y;i++)
	{
		if(sushu(i))
		count++; 
	}
	return count;
}
int main()
{
	int total=0;
	for(int i=1;i<10000;i=i+100)
	{
		total=total+qujian(i,i+99);
	}
	cout<<total;
	return 0;
}
