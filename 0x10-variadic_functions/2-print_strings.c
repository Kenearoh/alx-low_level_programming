#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - prints strings
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  * @...: variable strings to be printed
  *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int index;
	va_list string_list;

	va_start(string_list, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings_list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string_list);
}
