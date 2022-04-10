#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: It prints all the alphabets except q and e
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e)
		{
			putchar(c);
		}
		c++;

	}
	putchar('\n');
	return (0);
}

