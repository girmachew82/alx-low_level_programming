#include "main.h"

/**
 * print_sign -return sign 
 *
 * @n: get input
 * Return : Return sign +, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar('1');
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('0');
	}
	else
	{
		_putchar('-');
		_putchar('1');
	}
	_putchar('\n');
	return (0);
}
