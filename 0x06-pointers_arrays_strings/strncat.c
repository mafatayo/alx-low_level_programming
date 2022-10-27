#include "main.h"

/**
 * strncat - concantenates two strings
 *
 * @dest: string that is added to
 * @src: strings to be appended
 * @n: number of bytes from @src
 * Return: a pointer to the resulting string @dest
 */

char _*strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i;

	while (src[len1] != '\0')
		len1++;

	while (dest[len2] != '\0')
		len2++;

	for (i = 0; i < n; i++)
	{
		dest[len2] = src[i];
		len2++;
	}
	return (dest);
}
