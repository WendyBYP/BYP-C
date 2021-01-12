#include<stdio.h>
#include<string.h>
int main() 
{
    int len;
    int i,j,k; 
    char a[1000],c[1000];
    
        gets(a);
        len=strlen(a);
        for(i=0;i<=len;i++)
        {
        	int k=0;
        	while((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]>='Z'))//a[i]是字母
			{
				c[k]=a[i];//k表示当前单词有几位 
				k++;
				i++; 
			}
				for(j=k-1;k>=0;k--)
				{
					printf("%c",c[j]);
				}
			printf("%s",a[i]);
			
        	/*if(b[i]<97||b[i]>122)//a[i]不是字母 
        	{
        		c[i]=a[i];
        	}
            if(a[i]==' '||a[i]=='\0')
             {
             	  c[i]=a[i];
                  for(k=i-1;k>=j;k--)//当遇到是空格或者整个字符结束的时候，直接让k等于前一个数，逆序输出
                      c[i-k+1]=a[k];
                  //if(a[i]!='\0')
                  //printf(" ");//因为条件是不为空格的情况，所以还要逆序完之后直接输出
                  j=i;//记录遇见空格或者标点符号时，的i
             }
           
             printf("%c",c[i]);*/
        }
    return 0; 
}
 
