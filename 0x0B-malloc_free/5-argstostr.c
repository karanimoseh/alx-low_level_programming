#include <stdlib.h>
#include "main.h"
/**
 * *argstostr - converts arguments of a function to a string
 * @c: arguments count
 * @av: Array of arguments
 *
 * Retrun: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (*ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1 ));

	if (str == NULL)
		return (NULL)

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}

		return (str);
	}
}
