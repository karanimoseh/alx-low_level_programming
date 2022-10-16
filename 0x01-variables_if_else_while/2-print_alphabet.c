#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet
 *
 * Return: 0 when code executes succesfully
 */

int main(void)
{
	char letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	
	return (0);
