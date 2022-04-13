#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Function block
 * @a: integer to get last digit
 * Return: last digit
 */
int print_last_digit(int a)
{
	int lst;

	if (a < 0)
	{
		 a *= -1;
	}
	lst = a % 10;
	_putchar(lst + '0');
	return (lst);
}
