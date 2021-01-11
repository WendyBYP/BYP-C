#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int i,j,k,num,res=0,n,ll,pos=2,step;
	int a[1000],b[1000],c[1000];
	scanf("%d",&n);
	for(step=1;step<=n;step++){
		res=0;
		pos=2;
		scanf("%d",&num);
		while(num!=1){
			if(num%pos==0){
			    res++;
			    a[res]=pos;
			    num=num/pos;
			}
			else pos++;
			if(pos>num) break;
		}
		if(pos==num+1) {
		printf("%d\n",num);
		continue;
	     }
		for(i=1;i<=res-1;i++){
			printf("%d*",a[i]);
		}
		printf("%d\n",a[res]);
	}
}

