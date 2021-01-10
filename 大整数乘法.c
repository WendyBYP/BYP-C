#include <stdio.h>
#include <string.h>

#define MAXLENGTH 501

void compute(char *a, char *b, char *c);

int main() {
    char a[MAXLENGTH], b[MAXLENGTH], c[MAXLENGTH * 2];
	int n;
	scanf("%d", &n);
	for (int o = 0; o < n; o++) {
		scanf("%s %s", a, b);
		if (a[0] == '0' || b[0] == '0') {
			printf("0");
		} else {
			compute(a, b, c);
		}
		printf("\n");
	}
	return 0;
} 

void compute(char *a, char *b, char *c) { 
	int i, j, p, q, t; 
	long sum, carry; 

	p = strlen(a) - 1;
	q = strlen(b) - 1;
	for (i = p; i >= 0; i--) {
		a[i] -= '0';
	}
	for (i = q; i >= 0; i--) {
		b[i] -= '0';
	}
	c[p + q + 2] = '\0';

    carry = 0; 
    for (i = p + q; i >= 0; i--) { // i is the sum of axis
        sum = carry; 

        if ((j = i - p) < 0) {
            j = 0;
		}
        for ( ; j <= i && j <= q; j++) { // j is the y axis
			sum += a[i - j] * b[j]; //the sum of a group of numbers 
		}
		
		c[i + 1] = sum % 10 + '0'; //remained number
		carry = sum / 10; 
    } 

	if ((c[0] = carry + '0') == '0') { // if no carry
		for (int k = 1; k < MAXLENGTH * 2; k++) {
			if (c[k] - '0' < 0) break;
			printf("%d", c[k] - '0');
		}
	}
	if ((c[0] = carry + '0') != '0') { // if carry
		for (int k = 0; k < MAXLENGTH * 2; k++) {
			if (c[k] - '0' < 0) break;
			printf("%d", c[k] - '0');
		}
	}
}
