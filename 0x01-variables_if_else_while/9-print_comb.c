#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 10; dig++)
	{
		putchar((dig % 10) + '0');
		if (dig == 10)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
