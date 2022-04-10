#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10
 * Return: 0
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}
