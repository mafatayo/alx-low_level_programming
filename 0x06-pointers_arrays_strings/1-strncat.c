#include "main.h"

/**
 * strncat - concantenates two strings
 *
 * @dest: string that is added to
 * @src: strings to be appended
 * @n: number of bytes from @src
 * Return: a pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;

	int len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;

	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = 0;
	return (dest);
}
