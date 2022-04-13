#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	long int k;
	int count = 2;

	printf("%lu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", b);
		}
		else
		{
			printf("%lu, ", b);
		}
		k = b;
		b += a;
		a = k;
		count++;
	}
	return (0);
}
