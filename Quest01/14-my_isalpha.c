#include <stdio.h>
/**
 * _isalpha - Check for lowercase ASCII characters
 * @c: This is an ASCII character
 * Return: 0 if not an alphabet, 1 if so
 */
int my_isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
