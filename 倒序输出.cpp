#include<stdio.h>
int main() 
{
	int a[10],i;
	printf("Enter 10 numbers:");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("In reverse order:");
	for (i=9;i>=0;i--)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}
 
