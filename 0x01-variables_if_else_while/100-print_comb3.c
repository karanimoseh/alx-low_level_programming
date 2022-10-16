#include <stdio.h>

/**
 * mai - print double digit combos
 * Description: print double digit combos
 * Return: (0) success
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			putchar(i);
			putchar(j);

			if (i < 56 || j < 57)
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}

		puchar(10);

		return (0);
	}