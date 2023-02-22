#include <stdio.h>
#include <string.h>
char* my_strrchr(char* param_1, char param_2)

{
    int len = 0;
    while (*param_1 != '\0') {
        param_1++;
        len++;
        }
    while (len--) {
        if (*param_1 == param_2)
            return (param_1);
        param_1--;
    }
    return (NULL);
}  
