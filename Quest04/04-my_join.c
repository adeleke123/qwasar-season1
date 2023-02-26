#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
    int size;
    char** array;
} string_array;
#endif
int length (char* str2){
    int count = 0;
    for(int k=0; str2[k] != '\0'; k++){
        count++;
    }
    return count;
}

char* my_join(string_array* arr, char* ch)
{
    char newArr[100]={""};
    char* string = (char*)malloc(sizeof(char)*100);
    if(arr->size == 0){
        string = NULL;
    }else{
        for (int i = 0 ; i < arr->size; i++){
            for(int j = 0 ; j < length(arr->array[i]) ; j++){
                strcpy (newArr,arr->array[i]);
                if ( i == arr->size -1  && j == length(arr->array[i]) -1){
                    strcat(newArr, "");
                }
                else{
                    strcat(newArr, ch);
                } 
            }
        strcat(string, newArr);
        }
    }
    //printf("%s ", string);
    return string;
}

/*
This code defines a function called my_join() that takes in a string_array and a character string as input and returns a character string as output.
The #include directives at the beginning of the code include three header files: stdlib.h, string.h, and stdio.h. These header files provide various functions and definitions that are used in the code, such as malloc(), strcpy(), strcat(), and printf().
The #ifndef and #define statements define a macro called STRUCT_STRING_ARRAY and create a typedef for a struct called s_string_array. This allows you to use the type string_array to refer to the struct s_string_array in the rest of the code. The string_array struct has two fields: size and array.
The length() function takes in a character string as input and returns an integer representing the length of the string. It does this by iterating through the characters in the string and counting how many there are until it reaches the null terminator character '\0'.
The my_join() function is the main function in this code. It takes in a string_array and a character string as input, and it returns a character string as output. The function first initializes an empty character string called newArr and a character string called string that is allocated 100 characters of memory using malloc().
If the size field of the string_array is 0, the function sets string to NULL and returns it. Otherwise, the function iterates through the elements of the array field of the string_array and concatenates them to the string variable using the strcat() function. Between each element, the function also concatenates the character string ch. Finally, the function returns the string variable.
*/
