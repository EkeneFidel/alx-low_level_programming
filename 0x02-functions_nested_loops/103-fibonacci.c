#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the sum of fibonacci numbers less than 4000000
 * Return: 0
 */

int main(void)
{
	int i = 1;
	int j = 2;
	int k;
	int sum = 0;

	while (j < 4000000)
	{

		if (j % 2 == 0)
			sum += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", sum);
	return (0);
}
