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
        	while((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]>='Z'))//a[i]����ĸ
			{
				c[k]=a[i];//k��ʾ��ǰ�����м�λ 
				k++;
				i++; 
			}
				for(j=k-1;k>=0;k--)
				{
					printf("%c",c[j]);
				}
			printf("%s",a[i]);
			
        	/*if(b[i]<97||b[i]>122)//a[i]������ĸ 
        	{
        		c[i]=a[i];
        	}
            if(a[i]==' '||a[i]=='\0')
             {
             	  c[i]=a[i];
                  for(k=i-1;k>=j;k--)//�������ǿո���������ַ�������ʱ��ֱ����k����ǰһ�������������
                      c[i-k+1]=a[k];
                  //if(a[i]!='\0')
                  //printf(" ");//��Ϊ�����ǲ�Ϊ�ո����������Ի�Ҫ������֮��ֱ�����
                  j=i;//��¼�����ո���߱�����ʱ����i
             }
           
             printf("%c",c[i]);*/
        }
    return 0; 
}
 
