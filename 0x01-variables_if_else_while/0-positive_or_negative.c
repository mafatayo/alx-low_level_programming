#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Starting
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Code starts from here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
