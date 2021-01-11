#include<stdio.h>
int main()
{
	int a,b,c,x=0,y=0,t,i;
	scanf("%d/%d/%d",&a,&b,&c);
	if((a+2000)%400==0||((a+2000)%4==0&&(a+2000)%100!=0)) t=1;
	if(a>12||a==c)
	{
		switch(b)
		{ 
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n",c,a+2000);
	}
	else if(c>30||(b==29&&c!=2)||((b==4||b==6||b==9||b==11)&&c==31)||(t==1&&b==31)||(t==1&&b==30)||(t==0&&b==31)||(t==0&&b==30)||(t==0&&b==29))
	{
		switch(a)
		{ 	
		case 1: printf("January");break;
		case 2: printf("February");break;
		case 3: printf("March");break;
		case 4: printf("April");break;
		case 5: printf("May");break;
		case 6: printf("June");break;
		case 7: printf("July");break;
		case 8: printf("August");break;
		case 9: printf("September");break;
		case 10: printf("October");break;
		case 11: printf("November");break;
		case 12: printf("December");break;
		}
		printf(" %d, %d\n",b,c+2000);
	}
	else 
	{   
	for(i=2000;i<2000+a;i++)
	{
	if(i%400==0||(i%4==0&&i%100!=0)) x+=366;
	else x+=365;
	}
	for(i=1;i<b;i++)
	{if(i==4||i==6||i==9||i==11) x+=30;
	else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) x+=31;
	else if(i==2&&((a+2000)%400==0||((a+2000)%4==0&&(a+2000)%100!=0))) x+=29;
	else x+=28;
	}
	x+=c;
	for(i=2000;i<2000+c;i++)
	{
	if(i%400==0||(i%4==0&&i%100!=0)) y+=366;
	else y+=365;
	}
	for(i=1;i<a;i++)
	{if(i==4||i==6||i==9||i==11) y+=30;
	else if(i==1||i==3||i==5||i==8||i==7||i==10||i==12) y+=31;
	else if(i==2&&((c+2000)%400==0||((c+2000)%4==0&&(c+2000)%100!=0))) y+=29;
	else y+=28;
	}
	y+=b;
	if(x>y)	printf("%d",x-y);
	else	printf("%d",y-x);
	}
}
