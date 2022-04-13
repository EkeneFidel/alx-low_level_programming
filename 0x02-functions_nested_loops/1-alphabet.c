#include "main.h"
/**
 * print_alphabet - function block
 *
 * Description: This function prints the alphabets in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');
}
