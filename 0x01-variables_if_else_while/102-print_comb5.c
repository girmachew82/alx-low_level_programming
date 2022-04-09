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
		for (j = i + 1; j <= '9'; j++)
		{
			for (q = j + 1; q <= '9'; q++)
			{
				for (p = '0'; p <= '9'; p++)
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
	putchar('\n');

	return (0);
}
