#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *my_strdup(const char *s) {
    char *copy;

    // Allocate memory for the copy using malloc
    copy = malloc(strlen(s) + 1);

    // Check that malloc succeeded
    if (copy == NULL) {
        fprintf(stderr, "malloc failed\n");
        return NULL;
    }

    // Copy the original string into the newly allocated memory
    strcpy(copy, s);

    return copy;
}

/* int main(void) {
    char *original = "abc";
    char *copy;
    copy = my_strdup(original);
    // Use the copy
    printf("Original string: %s\n", original);
    printf("Copy: %s\n", copy);
    // Don't forget to free the memory when you're done with it
    free(copy);
    return 0;
}
*/
