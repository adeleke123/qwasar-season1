#include <stdio.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size;
    int* array;
} integer_array;
#endif

void my_first_struct(integer_array* param_1)
{
    int i = 0;
    printf("%d\n", param_1->size);
    while (i < param_1->size) {
        printf("%d\n",param_1->array[i]) ;
        i++;
    }

}
