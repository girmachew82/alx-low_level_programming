#include <stdio.h>

/**
 * main - check 
 * @void: no parameter
 * Return: nothing
 */
void main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
