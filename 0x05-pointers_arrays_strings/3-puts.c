#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; stri[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
