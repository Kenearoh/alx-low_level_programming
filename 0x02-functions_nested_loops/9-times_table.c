#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, result;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b >= 9; b++)
	{
	result = a * b;
	if (result > 9)
	{
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
	else
	{
		_putchar(result + '0');
	}
	if (b < 9)
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
