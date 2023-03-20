#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Always 0.
 */

int main(void)
{
	int b = 0;

	while (b <= 9)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}

