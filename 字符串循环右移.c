#include<stdio.h>
#include<string.h>

int main() {
	int M, len;
//	scanf("%d\n", &M); 第一次输入数字+回车，回车被默认为分隔符，与要求格式不匹配， 要求继续输入数据 
	
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
