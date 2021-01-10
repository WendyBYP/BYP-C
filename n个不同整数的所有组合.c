#include <stdio.h>

int subset(int s[], int t[], int k, int len) {
	if (k == len) {
		printf("--> ");
		for (int i = 0; i < len; i++) {
			if (t[i] == 1) {
				printf("%d ", s[i]);
			}
		}
		printf("\n");
		return 1;
	}
	
	t[k] = 1;
	subset(s, t, k + 1, len);
	
	t[k] = 0;
	subset(s, t, k + 1, len);
}

int main() {
	int m, o;
	scanf("%d", &m);
	for (o = 0; o < m; o++) {
		int n;
		scanf("%d", &n);
		
		int element;
		int s[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &element);
			s[i] = element;
		}
		
		int len = n;
		int k = 0;
		int t[n];
		subset(s, t, k, len);
	}
	return 0;
}
