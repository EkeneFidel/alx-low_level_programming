#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: This function prints the alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
