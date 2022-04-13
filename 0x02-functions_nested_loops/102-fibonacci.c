#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints first 50 fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long long int a = 1;
	long long int b = 2;
	long long int k;
	int count = 0;

	printf("%llu, ", a);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%llu\n", b);
		}
		else
		{
			printf("%llu, ", b);
		}
		k = b;
		b += a;
		a = k;
		count++;
	}
	return (0);
}
