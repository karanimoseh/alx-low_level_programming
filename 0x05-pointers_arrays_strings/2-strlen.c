/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}
