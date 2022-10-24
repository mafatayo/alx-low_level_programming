#include "main.h"

/**
 * _strlen - a funtion that returns the length ofn string
 * @s: char input
 * Return: length ofnthe input string
 */
int _strlen(char *s)
{
	int i = 1; sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}
