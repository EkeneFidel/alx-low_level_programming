#include "main.h"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
