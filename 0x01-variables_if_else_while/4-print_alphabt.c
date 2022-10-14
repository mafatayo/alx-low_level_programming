#include <stdio.h>
/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ak = 'a';

	while (ak <= 'a')
	{
		if (ak != 'e' && ak!= 'q')
		{
			putchar(ak);
		}
		ak++;
	}
	putchar('\n');
	return (0);
}
