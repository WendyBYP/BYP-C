#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int len; 
    char *p = NULL;
    p = (char *)malloc(sizeof(char));
    scanf("%[^\n]s", p);
    len = strlen(p);
    printf("%d",len) ;
    return 0;
} 
