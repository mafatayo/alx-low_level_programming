#include "main.h"

/**
 * print_rev - a function that prints a string in reverse
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int a, n;

	for (a = 0; s[a] != '\0'; a++)
	{
		fcounter++;
	}
	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
