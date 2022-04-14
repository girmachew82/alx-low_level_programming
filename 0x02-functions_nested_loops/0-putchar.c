#include "min.h"

/**
 * main -entry point
 * 
 * Return: o
 */ 
 int main(void)
{
	char pcr[] = '_putchar';
	
	int c;
	
	for(c = 0;  c < 8; c++)
	{
		_putchar(pcr[c]);
	}

	_putchar('\n');
	return(0);
}
