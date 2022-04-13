#include "main.h"
/**
 * print_alphabet - function block
 *
 * Description: This function prints the alphabets in lowercase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char x;
	
	while (i < 10)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		i++;		
		_putchar('\n');
	}
}
