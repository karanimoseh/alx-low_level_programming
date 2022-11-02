/**
 * _memset - fills memory with a constant byte
 * @s: area to be filled
 * @b: constant to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to memory areas
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
