#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 5; j > 0; j--)
		{
			if (j > i + 1)
			{
				printf(" ");
			} else 
				printf("%d", j);
		} puts("");
	}
	return 0;
}