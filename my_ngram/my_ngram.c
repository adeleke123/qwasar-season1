#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARRAY_SIZE 150
// Returns length of the string.
int get_str_length(const char* str)
{
    if (str == NULL) {
        // if input is NULL
        return 0;
    }
    int length = 0;
    // Length incremented until it gets to NULL
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Fills the array with the frequency of each characters in the string.
// Characters within double quotes are ignored.
void fill_array(int* arr, const char* str)
{
    // iterate through all the characters in the string
    for (int i = 0; i < get_str_length(str); i++) {
        // when there is a double quote
        if (str[i] != '"') {
            arr[str[i]]++;
        }
    }
}

// Prints the number of occurance of each character in the array
void print_array(const int* arr, int arr_size)
{
    // iterate through all the elements in the array
    for (int i = 0; i < arr_size; i++) {
        // Prints character and its frequency if its non-zero
        if (arr[i] > 0) {
            printf("%c:%d\n", i, arr[i]);
        }
    }
}


int main(int argc, char**argv) {
    int arr[MAX_ARRAY_SIZE] = { 0 };
    //iterate through all the command-line arguments.
    for (int i = 1; i < argc; i++) {
        fill_array(arr, argv[i]);
    }
    print_array(arr, MAX_ARRAY_SIZE);
    return 0;
}

