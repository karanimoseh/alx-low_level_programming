#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0 when code executes succesfully
 */

int main(void)
{
	int letter = 97

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);

}
