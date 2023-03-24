#include "main.h"
/**
 * positive_or_negative() -test 'i' is positive_or_negative or 0.
 * 0 - the number to be checked
 * i - the variable to be tested
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
	return;
}
