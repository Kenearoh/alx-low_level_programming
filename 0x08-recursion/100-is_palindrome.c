#include "main.h"
#include <string.h>
/**
* is_palindrome - checks if a string is a palindrome or not recursively
* @str: string to check
* @start: starting index of the substring to check
* @end: ending index of the substring to check
*
* Return: 1 if the substring from start to end is a palindrome, 0 if not
*/
int is_palindrome(const char *str, int start, int end)
{
if (start >= end)/* base case,string has one character or less*/
{
return (1);
}
if (str[start] != str[end])/*is not a palindrome*/
{
return (0);
}
return (is_palindrome(str, start + 1, end - 1));
}

/**
* check_palindrome - checks for palindrome
* @s: string to check
* Return: 1 if a palindrome, 0 if not
* wrapper function that calls is_palindrome with the correct parameters
*/
int check_palindrome(const char *s)
{
	int len = strlen(s);

	return (is_palindrome(s, 0, len - 1));
}
