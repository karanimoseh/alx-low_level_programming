#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: is the int that will use for the argument of the function
 * code written by Moses karani 
 * Return:0 when successful
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}