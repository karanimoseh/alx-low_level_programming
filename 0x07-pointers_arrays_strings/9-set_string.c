/**
 * set_string -sets value of a pointer to a char
 * @s: pointer to pointer to be set
 * @to: string to set
 */

void set_string(char **s, char *to)
{
	*s = to;
}
