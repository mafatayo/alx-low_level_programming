#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ak;

	for (ak = 'a'; ak <= 'z'; ak++)
		putchar(ak);
	for (ak = 'A'; ak = 'Z'; ak++)
		putchar(ak);
	putchar('\n');
	return (0);
}
