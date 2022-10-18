#include "main.h"

/**
 * print_alphabet - function to print abc
 * code written my Karani Moses
 * Return: 0 when successful
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
