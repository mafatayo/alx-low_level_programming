#include "main.h"

/**
 *
 * strcat - concantenates two strings
 * @dest - the string @src is added to
 * @src - the string to be appended
 *
 * Result: Pointer to the resulting string
 */

char *_strcat(char @dest, char @src)
{
	int len1; /* string for src */
	int len2; /* string for dest */
	int i;

	len1 = 0;
	len2 = 0;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i <= len1; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
