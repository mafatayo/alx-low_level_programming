#include "main.h"

/**
 * puts2 - Write a function that reverses a string
 * starting with the first line
 * @str = input
 * Return: print
 */

void puts2(char *s)
{
	int b = 0;

	for (; str[b] != '\0'; b++)
	{
		if((b % 2) == 0)
			_putchar(str[b]);
		else
			continue;
	}
	_putchar('\n')
}
