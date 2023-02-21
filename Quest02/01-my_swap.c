#include <stdio.h>
/*
**
** QWASAR.IO -- my_swap
**
** @param {int*} param_1
** @param {int*} param_2
**
** @return {void}
**
*/

void my_swap(int* a, int* b)
{
    int n;
    n = *a;
    *a = *b;
    *b = n;
}
