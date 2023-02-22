#include <stdio.h>
#include <string.h>

char* my_strcpy(char* param_1, char* param_2)
{
    int i = 0;

    while (param_2[i] != '\0') {
        param_1[i] = param_2[i];
        i++;
    }
    param_1[i] = '\0';
return (param_1);
}
