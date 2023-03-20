#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Always 0.
 */

int main(void)
{
	int b = 48;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

