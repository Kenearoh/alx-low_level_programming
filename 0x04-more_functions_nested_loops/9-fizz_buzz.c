#include <stdio.h>
#include "main.h"

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s", "Fizz Buzz");
		}
		else if (a % 3 == 0)
		{
			printf("%s", "buzz");
		}
		else if (a % 5 == 0)
		{
			printf("%s", "Fizz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	return (0);
}
