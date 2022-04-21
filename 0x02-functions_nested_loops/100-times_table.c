#include <stdio.h>
#include "main.h"

/**
 * print_times_table - printing time table
 * @n: an integer
 * Return: nothing
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n > 15 || n < 0)
	{
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d", (i * j));
				if (j == n)
					continue;
				printf(",");
				printf(" ");
			}
			printf("\n");
		}
	}
	printf("\n");
}
