#include "main.h"

/**
 * print_sign -return sign 
 *
 * @n: get input
 * Return : Return sign +, 0 or -1
 */
int print_sign(int n)
{
	int number;

	if (n > 0)
	{	
		number = 1;
		_putchar('+');
	}
	else if (n == 0)
	{	
		number = 0;
		_putchar('0');
	}
	else
	{	
		number = -1;
		_putchar('-');
	}
	return (number);
}
