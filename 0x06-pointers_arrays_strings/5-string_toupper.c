#include "main.h"
/**
 * string_toupper - changes  lowercase to uppercase
 * @z: pointer
 * Return: char
 */

char *string_toupper(char *z)
{
	int i;

	i = 0;
	while (z[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
