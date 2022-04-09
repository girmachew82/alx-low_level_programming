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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			if(j != i)
			{
			putchar(i);
			putchar(j);	

			if (i == '8' && j == '9')
				continue;

			putchar(',');
			putchar(' ');
			}
			
		}
	}
return 0;
}

