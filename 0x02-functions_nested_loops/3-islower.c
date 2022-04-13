#include "main.h"

/**
 * _islower - function block
 *
 * @c: character to check
 * Description: This function returns 1 if c is lowercase
 * returns 0 otherwise
 * Return: num
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
