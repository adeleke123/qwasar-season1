#include <stdio.h>
void my_print_reverse_alphabet()
{
    char letter;

    letter = 'z';
    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }
        putchar('\n');    
}
