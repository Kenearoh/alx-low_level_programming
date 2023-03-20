#include <stdio.h>
/**
 *main - Prints all combinations of single digits
 *
 *Return: Always 0.
 */
int main(void)
{
	int b = 48;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
