#include "main.h"

/**
 * print_last_digit - function block
 * @a: Number to check last digit
 *
 * Description: Prints the last digit
 * Return: The value of the last digit
 */

int print_last_digit(int a)
{
	int lst = a % 10;

	if (lst < 0)
	{
		lst *= lst * -1;
	}
	_putchar(lst + '0');
	return(lst);
}
