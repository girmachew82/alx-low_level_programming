#include "main.h"

/**
 * _isalpha - check for alphabet character
 * @c: take a character
 * Return: 1 if letter, lowercase, uppercase; o otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
