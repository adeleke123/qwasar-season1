#include <stdio.h>
/**
 * _isdigit - check for numbers
 *
 * @c: parameter to print
 *
 * Return: 0 or 1
 */

int my_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
