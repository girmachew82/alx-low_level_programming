#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */

int main()
{
	int i;
	int j;

	for(i = '0'; i <= '9'; i++)
	{
		for(j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
         		putchar(',');
			putchar(' ');
		}
	}
return 0;
}

