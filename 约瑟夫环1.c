#include <stdio.h>
#include <stdlib.h>
#include "joseph.h"

joseph *joseph_insert(int num)
{
	joseph *l = NULL;
	joseph *p = NULL;
	joseph *new = NULL;
	int i = 1;

	l = malloc(sizeof(joseph));
	l->id = i;
	
	p = l;

	sprintf(l->id, "%d", i);

	for(i = 1; i <=10 ; i++) {
		new = malloc(sizeof(LLIST));
		new->id = i;
		sprintf(new->id, "%d", i);
		new->next = l;
		p->next = new;
		p = new;
	}
	return l;

}


void joseph_display(joseph *l)
{
	joseph *p;

	for(p = l; p != l; p = p->next)
		printf("%d\n", p->id);
}

int joseph_play(joseph *p, int i , int j)
{
	joseph *p = l;

	LLIST *p = NULL;

//	p = _find(*l, find_data);

	for(i = 1; i < 4; i++) {
		while(i == 3) {

		}
	}

	for(p = l; p != l; p = p->next) {
		if(p->id == );
			return p;
	}

	if(p == NULL)
		return -1;
	if(p == *l) {
		*l = (*l)->next;
		free(p);
	}
	else {
		while(back->next != p)
			back = back->next;
		back->next = p->next;
		free(p);
	}

	printf("Bingo! l->id = %d\n",i);

	return 0;
}
