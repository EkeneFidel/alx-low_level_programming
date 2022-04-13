#include <stdio.h>
/**
 * print_natural_number- Function block
 *
 * Description: Prints the sum of all the multiples of 3 or 5 below 1024
 */

void print_natural_number(void)
{
	int sum = 0;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d", sum);
}

/* main- Entry function
 *
 * Description: Runs print_natural_number
 * Return: 0
 */
void main(void)
{
	print_natural_number();
}
