#include<stdio.h>
#include<conio.h>
void print(q,w,e,r){
	int i,j;
	printf("+");
	for(i=0;i<q;i++)
	{
		printf("-");
	}
	printf("+\n");
	
	for(i=0;i<r;i++){
		printf("|");
		for(j=0;j<q;j++)
		{
			printf(".");
		}
		printf("|\n");
	}
	printf("|");
	for (i=0;i<e;i++){
		printf(".");
	}
	printf("@");
	for(i=0;i<q-e-1;i++){
		printf(".");
	}
	printf("|\n");
	
	for (i=0;i<w-r-1;i++){
		printf("|");
		for (j=0;j<q;j++){
			printf(".") ;
		}
		printf("|\n");
	}
	 
	printf("+");
	for (i=0;i<q;i++) 
	{
		printf("-");
	}
	printf("+\n");
}
int main()
{
	int m,n,a,b;
	
	printf("请输入大小和位置"); 
	scanf("%d%d%d%d",&m,&n,&a,&b);
	print(m,n,a,b);

	
	

int ch;
//while()
while((ch = getch())!= 0x1B){
//printf("%c\n", ch);
switch (ch){
case 0xE0:
switch(ch = getch()){
case 72: {	
if(b==0){
	break;
}
b-= 1;
	print(m,n,a,b);
	break;
}
case 80:{
	if (b==n-1){
		break;
	}
	b+=1;
	print(m,n,a,b);
	break;
} 
case 75:{
	if(a==0){
		break;
	}
	a-=1;
	
	print(m,n,a,b);
	break;
}
case 77:{
	if(a==m-1)
	break;
	a+=1;
	print(m,n,a,b);
	break;
} 
default : break;
}
break;
default : break;
}
}
return 0;
}	

