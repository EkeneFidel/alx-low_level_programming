#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: size of triangle .
 *
 * Return: void
 */


void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
