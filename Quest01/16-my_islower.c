#include <stdio.h>
/**
 * _islower - Check for lowercase ASCII characters
 * @c: This is an ASCII character
 *
 * Return: 0 if not lowercase, 1 if lowercase
 */
int my_islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
