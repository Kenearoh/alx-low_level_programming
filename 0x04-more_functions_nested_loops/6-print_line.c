#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: line should end with a \n, else only \n
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('-');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
