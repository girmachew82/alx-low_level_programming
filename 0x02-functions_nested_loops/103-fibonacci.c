#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int t1, t2, i, sum = 0;
	long int next;
       
	t1 = 1;
	t2 = 2;

	next = t1 + t2;
	
	if (t1 % 2 == 0)
		sum += t1;
	if (t2 % 2 == 0)
		sum += t2;
	for (i = 1; i < 4000000; i++)
	{
		if (next % 2 == 0)
			sum += next;
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	printf("%lu\n", sum);
	return (0);
}
