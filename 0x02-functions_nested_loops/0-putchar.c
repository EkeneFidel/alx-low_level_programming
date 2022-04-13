#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char lst[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(lst[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
