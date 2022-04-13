#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Function block
 * @a: integer to get last digit
 * Return: last digit
 */
int print_last_digit(int a)
{
	int num;

	if (a < 0)
	{
		num = -1 * (a % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = a % 10;
		_putchar(num + '0');
		return (num);
	}
}
