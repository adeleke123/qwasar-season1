#include <stdio.h>
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
bool my_is_sort(integer_array* param_1)
{
    int i = 1;

    if (param_1->size < 2)
        return (true);
    if (param_1->array[i] >= param_1->array[i - 1]) {
        while (i < param_1->size && param_1->array[i] >= param_1->array[i - 1])
            i++;
        if (i == param_1->size)
            return (true);
    }
    i = 1;
    if (param_1->array[i] <= param_1->array[i - 1]) {
        while (i < param_1->size && param_1->array[i] <= param_1->array[i - 1])
            i++;
        if (i == param_1->size)
            return (true);
    }
    return (false);
}
