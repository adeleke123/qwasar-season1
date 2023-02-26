#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif
integer_array* my_count_on_it(string_array* string_array) {
    integer_array* integer_array = malloc(sizeof(integer_array));
    if (integer_array == NULL) {
        return NULL;
    }

    integer_array->size = string_array->size;
    integer_array->array = malloc(integer_array->size * sizeof(int));
    if (integer_array->array == NULL) {
        free(integer_array);
        return NULL;
    }

    for (int i = 0; i < integer_array->size; i++) {
        integer_array->array[i] = strlen(string_array->array[i]);
    }

    return integer_array;
}
