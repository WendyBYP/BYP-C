#include<stdio.h>
#include<string.h>

int main() {
	int M, len;
//	scanf("%d\n", &M); ��һ����������+�س����س���Ĭ��Ϊ�ָ�������Ҫ���ʽ��ƥ�䣬 Ҫ������������� 
	
	scanf("%d\n", &M);
	
	char ch[201] = " ";
	char cg[201] = " ";
	
	fgets(ch, 202, stdin);
	len = strlen(ch) - 1;

	for (int i = 0; i < M; i++) {
		cg[i] = ch[len + i - M];
	}
	
	for (int i = M, j = 0; j < len - M; i++,j++) {
		cg[i] = ch[j];
	}

	printf("%s", cg);

	return 0;
}
