#ifndef STRUCT_STRING_ARRAY
#include <stdio.h>
#include <string.h>
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
void my_print_words_array(string_array* param_1)
{
    int length = param_1->size;
    for(int i = 0; i < length ; i++){
        for(int j = 0; j < strlen(param_1->array[i]) ; j++){
            putchar(param_1->array[i][j]);
        }
        putchar('\n');
    }
    
}
