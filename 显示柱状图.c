#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int m,p=0,k=0,t=1,bmax=0,lmax=0,i=0,j=0,n;
	scanf("%d ",&m);
	struct sign{
		int n;
		char si;
	}s[100];
	char ch,c[50];
	for(i=0;i<50;i++){
		c[i]=0;
	}
	ch=getchar();
	i=0;
	while(ch!='\n'){
		c[i++]=ch;
		ch=getchar();
	}
	n=strlen(c);
	c[n]=' ';
	for(i=0;i<=n;i++){
		if(c[i]=='-'){
			t=-1;
			p=0;
		}
		else if(c[i]==' '){
			t=1;
		}
		if(c[i]>='0'&&c[i]<='9'){
			if(p==1){
				s[k].n=(s[k].n*10)+(c[i]-'0')*t;
			}
			if(p==0){
				s[k].n=(c[i]-'0')*t;
				p=1;
			}
		}
		else if(p==1){
			p=0;
			if(c[i]==' '){
				s[k].si='+';
				k++;
			}
			else{
				s[k].si=c[i];
				k++;
			}
		}
	}
	for(i=0;i<k;i++){
		if(s[i].n>0){
			if(s[i].n>bmax)
				bmax=s[i].n;
		}
		else{
			if(s[i].n<lmax)
				lmax=s[i].n;
		}
	}
	char a[bmax+1-lmax][m];
	for(j=0;j<m;j++){
	
			if(s[j].n>0){
			for(i=bmax-1;i>bmax-s[j].n-1;i--)
				a[i][j]=s[j].si;
			for(i=bmax+1;i<bmax+1-lmax;i++)
				a[i][j]=' ';
			for(i=0;i<=bmax-s[j].n-1;i++)
				a[i][j]=' ';
		}
		else if(s[j].n<0){
			for(i=bmax+1;i<bmax-s[j].n+1;i++)
				a[i][j]=s[j].si;
			for(i=bmax-s[j].n+1;i<bmax-lmax+1;i++)
				a[i][j]=' ';
			for(i=0;i<bmax;i++)
				a[i][j]=' ';
		}
		else{
			for(i=0;i<bmax;i++)
				a[i][j]=' ';
			for(i=bmax+1;i<bmax-lmax+1;i++)
				a[i][j]=' ';
		}
	}
	for(j=0;j<m;j++){
		a[bmax][j]='-';
	}
	for(i=0;i<bmax+1-lmax;i++){
		for(j=0;j<m;j++){
			if(i==bmax&&j!=m-1)
				printf("%c-",a[i][j]);
			else if(i==bmax&&j==m-1)
				printf("%c",a[i][j]);
			else printf("%c ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

