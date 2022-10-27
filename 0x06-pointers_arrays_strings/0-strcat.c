#include "main.h"

/**
 *
 * strcat - concantenates two strings
 * @dest:  the string @src is added to
 * @src: the string to be appended
 *
 * Result: Pointer to the resulting string
 */

char *_strcat(char @dest, char @src)
{
	int len1; /* string for src */
	int len2; /* string for dest */

	len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';
	return (dest);
}
