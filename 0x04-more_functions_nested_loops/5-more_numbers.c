#include "main.h"

/**
 * more numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putcharonly 3 times
 * Return: 0-14 x10 followed by a new line
 */

void more_numbers(void)
{
	int x, gh;

	for (gh = 0; gh < 10; gh++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) +'0');
		}
		_putchar('\n')
	}
}
