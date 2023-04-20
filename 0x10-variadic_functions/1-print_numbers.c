#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - print numbers
  * @separator: string to be printed between numbers
  * @n: number of integers passed to the function
  * @...: variable numbers to be printed
  * Return: 0, else sum of parameters
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list numbers;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
