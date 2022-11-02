#include <stdio.h>

/**
 * print_diagsums - prints sum of 2 diagonoals of a square matrix
 * @a: pointer to the array;
 * @size: void
 */

void print_diagsums(int *a, int size)
{
	int row;
	int diagl = 0, diag2 = 0;

	for (row = 0; row < size; row++)
	{
		diag1 += a[(size * row) + row];
		diag2 += a[(size * (row + 1)) - (row + 1)];
	}
	printf("%d, %d\n", diag1, diag2);
}
