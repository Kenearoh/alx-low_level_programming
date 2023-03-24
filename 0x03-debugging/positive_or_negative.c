#include "main.h"
/**
 * main - Entry point
 *
 * positive_or_negative():'positive_or_negative()' output +, - or 0.
 * @int i: variable to be checked for case 0
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
	return (0);
}
