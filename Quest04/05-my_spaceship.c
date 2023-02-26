#include <stdlib.h>
#include <string.h>
#include <stdio.h>
int lengthf (char* str2){
    int count = 0;
    for(int k=0; str2[k] != '\0'; k++){
        count++;
    }
    return count;
}

char* my_spaceship(char* str)
{
    char rotation[4][5]={"up", "right", "down", "left"};
    int index = 0;
    int x = 0;
    int y = 0;
    int i=0;
    int length = lengthf(str);
    char* output = (char*)malloc(sizeof(char)*100);
    while(i<length){
        if(str[i] == 'R'){
            index++;
        } else if (str[i] == 'L') {
            index--;
        } else {
            if(index == 0){
                y--;
            } else if (index == 1) {
                x++;
            } else if (index == 2) {
                y++;
            } else {
                x--;
            }
        }
        while (index<0) {
            index += 4;
        }
	    
	i++;
	}
	sprintf(output, "{x: %d, y: %d, direction: '%s'}", x, y, rotation[index%4]);
	return output;
}
/*
This code defines a function my_spaceship that takes a string str as an argument and returns a string representing the position and direction of a spaceship based on the instructions in the input string.
The #include directives at the top of the file include the required header files for the standard library. The header file stdlib.h contains functions for performing general functions in the C standard library, such as memory allocation, and string.h contains functions for manipulating strings. stdio.h is included for input/output operations.
The lengthf function is a helper function that calculates the length of a given string. It does this by iterating through the characters of the string and incrementing a counter until it reaches the null terminator character '\0'.
The my_spaceship function first declares an array of strings called rotation representing the four directions (up, right, down, left) and an index variable that will be used to keep track of the direction of the spaceship. It also declares variables x and y to represent the position of the spaceship, and i to keep track of the current index in the input string. The function then calculates the length of the input string using the lengthf helper function and allocates memory for the output string using malloc.
The function then enters a loop that iterates through the characters in the input string. If the character is 'R', it increments the index variable, and if it is 'L', it decrements the index variable. If the character is neither 'R' nor 'L', it updates the position of the spaceship based on the current direction indicated by the index variable. If the index is 0 (up), it decrements the y coordinate, and so on. The index variable is also adjusted to ensure that it is always between 0 and 3, by adding or subtracting 4 as necessary.
After the loop finishes, the function formats the output string using sprintf, including the x and y coordinates and the current direction indicated by the index variable. It then returns the output string.
*/
