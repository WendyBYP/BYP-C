#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j, l, m, k = 0, o, p = 0, z = 0; //P=1 NO  P=0 YES
    scanf("%d\n", &n);                         //\n�����洢Enter,��ֹ����һ��scanf��ȡ
                                               //\n����getchar()������
    char ch[n][100];
    //�����ű�ʾ�ַ������� char����һ���ַ���char[]�������飬�����������ַ���
    for (i = 0; i < n; i++)
    {
        scanf("%[^\n]s", ch[i]); //scanf��ӵ�ַ��������ch[1]--����һ��ֵ�����&
                                   //������ch--����ʹ����ַ�������&
                                   //��ֹ�������ַ����ڿո� //���ڴ��������ַ������޿ո�ʹ��scanf("%s",ch)Ҳ����
        getchar();
    }
    for (j = 0; j < n; j++)
    {
        l = strlen(ch[j]);
        for (m = 0; m < l; m++)
        {
            if (ch[j][m] == 'A')
            {
                k++;
                if (ch[j][m + 1] == 'S' && ch[j][m + 2] == 'C' && ch[j][m + 3] == 'U')
                {
                    for (o = 0; o < l; o++)
                    {
                        z++;
                        if (ch[j][m + 4 + o] == '\0')
                        {
                            p = 1;
                            break;
                        }
						if (ch[j][m + 4 + o] != 'A')
                        {
						p = 1;
						break;
                        }
                        if (z == k)
                        {
                            p = 0;
                            break;
                        }
                        else
                        {
                            p = 1;
                        }
                    }
                    break;
                }
            }
            else
            {
                if (ch[j][0] == 'S' && ch[j][1] == 'C' && ch[j][2] == 'U' && ch[j][3] == '\0')
                {
                    p = 0;//YES
                    break;
                }
                else
                {
                    p = 1;
                }
            }
        }
  		if (p == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
	}
}

