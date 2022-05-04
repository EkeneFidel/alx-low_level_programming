#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 *
 * @c: integer to check
 * Return: 1 if upper and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
