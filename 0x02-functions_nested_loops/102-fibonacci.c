#include <stdio.h>

/**
 * main - check 
 * @void: no parameter
 * Return: 0
 */
int main(void)
{
	int t1 = 1, t2 =2, i;
	long next  = t1 + t2;
	
	printf("%d, %d, ", t1, t2);

	for (i = 3; i <= 50; i++)
	{
		printf("%ld, ", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	return (0);
}
