#include <stdio.h>
int judge(char d[3][3])
{
	int result = -1; 
	int l, m;
	int numberofxline, numberofxlist, numberofoline, numberofolist;
	for (l = 0; l < 3 && result == -1; l++)
	{
		numberofxline = numberofxlist = numberofoline = numberofolist = 0; 
		for (m = 0; m < 3; m++)
		{
			if (d[l][m] == 'X')
			{
				numberofxline++;
			}
			if (d[m][l] == 'X')
			{
				numberofxlist++;
			}
			if (d[m][l] == 'O')
			{
				numberofoline++;
			}
			if (d[l][m] == 'O')
			{
				numberofolist++;
			}
		}

		if (numberofxline == 3 || numberofxlist == 3)
			result = 1;
		if (numberofoline == 3 || numberofolist == 3)
			result = 0;
	}
	/*	if (numberofxline==3||numberofxlist==3)
	result=1;
	if(numberofoline==3||numberofolist==3)
	result=0 ;*/
	int numberofx = 0, numberofo = 0; //??????
	if (result == -1)
	{
		for (l = 0; l < 3; l++)
		{
			if (d[l][l] == 'X')
			{
				numberofx++;
			}
			else if (d[l][l] == 'O')
			{
				numberofo++;
			}
		}
		if (numberofx == 3)
		{
			result = 1;
		}
		else if (numberofo == 3)
		{
			result = 0;
		}
	}
	if (result == -1)
	{
		numberofx = 0, numberofo = 0;
		for (l = 0; l < 3; l++)
		{
			if (d[l][3 - l - 1] == 'X')
			{
				numberofx++;
			}
			else if (d[l][3 - l - 1] == 'O')
			{
				numberofo++;
			}
		}
		if (numberofx == 3)
		{
			result = 1;
		}
		else if (numberofo == 3)
		{
			result = 0;
		}
	}

	return result;
}

int main()
{
	int i, j;
	int a;
	int number = 0;
	char c[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = '.';
		}
	}

	do
	{
		scanf("%d", &a);
		if (a == 7 || a == 8 || a == 9)
		{
			a -= 6;
		}
		else if (a == 1 || a == 2 || a == 3)
		{
			a += 6;
		}

		while (c[(a - 1) / 3][(a - 1) % 3] == 'X' || c[(a - 1) / 3][(a - 1) % 3] == 'O')
		{
			printf("warning,the place has a chess\n");
			scanf("%d", &a);
			if (a == 7 || a == 8 || a == 9)
			{
				a -= 6;
			}
			else if (a == 1 || a == 2 || a == 3)
			{
				a += 6;
			}
		}
		//	if(c[a-1][b-1]=='.')
		c[(a - 1) / 3][(a - 1) % 3] = 'X';
		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				printf("%c", c[i][j]);
			}
			//system("cls");
			printf("\n");
		}
		number++;
		if (number == 9)
			break;
		if (judge(c) != 1)
		{
			scanf("%d", &a);
			if (a == 7 || a == 8 || a == 9)
			{
				a -= 6;
			}
			else if (a == 1 || a == 2 || a == 3)
			{
				a += 6;
			}
			while (c[(a - 1) / 3][(a - 1) % 3] == 'X' || c[(a - 1) / 3][(a - 1) % 3] == 'O')
			{
				printf("warning,the place has a chess\n");
				scanf("%d", &a);
				if (a == 7 || a == 8 || a == 9)
				{
					a -= 6;
				}
				else if (a == 1 || a == 2 || a == 3)
				{
					a += 6;
				}
			}
			c[(a - 1) / 3][(a - 1) % 3] = 'O';
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
				{
					printf("%c", c[i][j]);
				}
				printf("\n");
			}
			number++;
		}
		/*	if(judge(c)==0)
		break;*/
		if (number == 9)
			break;
	} while (judge(c) == -1);

	if (judge(c) == -1)
	{
		printf("no one wins");
	}
	else if (judge(c) == 1)
	{
		printf("the one with X WINS");
	}
	else if (judge(c) == 0)
	{
		printf("the one with O wins");
	}
	system("pause");
	return 0;
}

