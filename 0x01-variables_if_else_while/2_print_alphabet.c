#include <stdlib.h>
#include <stdio.h>

/**
 *main-print the letters of the alphabet 
 *Description: print the letters of the alphabet
 *Return:0 when code executes successfully 
 */

int main(void)
{
	char letter = 'a';

	while (letter != 'z' + 1)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
