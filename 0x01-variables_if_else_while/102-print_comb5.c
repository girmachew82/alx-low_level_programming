#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, q, p;
	
	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (q = '0'; q <= '9'; q++)
			{
				for(p = '1'; p <= '9'; p++)
				{
					if (j != i)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(q);
						putchar(p);
				       		putchar(',');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
