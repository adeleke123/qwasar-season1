#include <stdio.h>
/*
**
** QWASAR.IO -- my_strlen : s refers to the string whose length has to be calculated
**
** @param {char*} param_1: The strlen() function in C takes a string as a parameter.
**
** @return {int}: The strlen() function in C returns the length of the string which is passed as the parameter to the function. 
** The length of the string is returned in integer type excluding the NULL character.
**
*/
int my_strlen(char* s)
{
    int i = 0;
    int count = 0;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
