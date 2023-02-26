#include <stdio.h>
#include <stdlib.h>
int* my_range(int min, int max) {
  // Check if min is greater or equal to max
  if (min >= max) {
    return NULL;
  }

  // Calculate the size of the array
  int size = max - min;

  // Allocate memory for the array using malloc
  int* arr = malloc(size * sizeof(int));
  if (arr == NULL) {
    // Check for malloc error
    perror("malloc error");
    exit(1);
  }

  // Populate the array with values from min to max
  for (int i = 0; i < size; i++) {
    arr[i] = min + i;
  }

  return arr;
}
