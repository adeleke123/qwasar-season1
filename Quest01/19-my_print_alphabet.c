#include <stdio.h>
/**
 * print_alphabet-prints a-z in lowercase
 * Return: Nothing (Null void)
 */
void my_print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
}
