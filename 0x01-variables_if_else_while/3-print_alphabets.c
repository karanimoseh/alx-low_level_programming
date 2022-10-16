#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * Description: print the letters of the alphabet in lower then in uppercase
 * Return: (0) when successful
 */

int main(void)
{
	int small, capital;

	small = 97;
	capital = 65;

	while (small < 123)
	{
		putchar(small);
		small++;
	}

	while (capital < 91)
	{
		putchar(capital);
		capital++;
	}

	putchar(10);

	return (0);
}
