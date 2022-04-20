#include "main.h"

/**
 * _abs - get absolute value of an integer
 * @r: An integre
 * Return: Absolut value of number r
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
