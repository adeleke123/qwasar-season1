#include <stdio.h>
#include <string.h>

int my_strcmp(char* param_1, char* param_2)
{
    while (*param_1 != '\0' && *param_2 != '\0') {
        if (*param_1 == *param_2) {
            param_1++;
            param_2++;
        }
        else
          break;
    }
    return (*param_1 - *param_2); 
}
