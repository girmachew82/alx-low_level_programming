#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n <= 98; n--)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if ( n == 98)
		printf("%d", 98);
	else
	{
		for (; n >= 98; n++)
		{
			printf("%d", n);
			_putchar(',');
			_putchar(',');
		}
	}
}
