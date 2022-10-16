#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: print single digit numbers
 * Return: (0) success
 */

int main(void)
{
	int num;

	num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}

	putchar(10);

	return(0);
}
