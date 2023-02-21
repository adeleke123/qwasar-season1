#include <stdio.h>
/*
**
** QWASAR.IO -- my_downcase
**
** @param {char*} param_1
**
** @return {char*}
**
*/

#include <stdio.h>
#include <string.h>
char* my_downcase(char* param_1)
{
    for (int i = 0; param_1[i] != '\0'; i++) {
        if(param_1[i] >= 'A' && param_1[i] <= 'Z') {
         param_1[i] = param_1[i] +32;
        }
    }
    return param_1;
}
