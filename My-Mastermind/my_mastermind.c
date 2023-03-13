#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CODE_SIZE 4

int is_digit(char *str)
{
    // Calculate length of string
    int str_length = strlen(str); 

    for (int i = 0; i < str_length; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9')) 
            return 1; 
    }
    return 0; 
}


int *generate_random_code()
{
    int *code = malloc(CODE_SIZE * sizeof(int));
    int used_nums[9] = {0};

    srand(time(NULL));
   
    for (int i = 0; i < CODE_SIZE; i++)
    {
        int random_num = rand() % 10; 

        while(used_nums[random_num] == 1){ 
            random_num = rand() % 10;
        }
        code[i] = random_num;
        used_nums[random_num] = 1; 
    }
    return code;

}


void convert_str_to_int(int* code, char* str)
{
    int i;
    char num_str[2] = {0};
    for (i = 0; str[i] != '\0'; i++)
    {
        num_str[0] = str[i];
        code[i] = atoi(num_str);
    }
}

int main(int argc, char **argv) 
{
    int *hidden_code = malloc(CODE_SIZE * sizeof(char));
    int max_guesses = 10, rounds = 0;
    int *guess = malloc(CODE_SIZE * sizeof(int));
    
    if (argc > 2)
    {
        if((is_digit(argv[2]) != 0) || (strlen(argv[2]) != 4)){ 
            printf("Wrong input %s passed\n", argv[2]);
            hidden_code = generate_random_code();
        }
        else
        {
            if(strcmp(argv[1], "-c") == 0)  
                convert_str_to_int(hidden_code, argv[2]);
            else if(strcmp(argv[1], "-t") == 0){ 
                max_guesses = atoi(argv[2]);
                if (max_guesses > 10)
                    max_guesses = 10;
            }
        }
    }
    else
       hidden_code = generate_random_code();
    printf("Will you find the secret code?\n");
    printf("Please enter a valid guess\n");

    while (max_guesses > 0)
    {
        printf("\nRound %d\n", rounds);
        rounds ++;

        int well_placed = 0, misplaced = 0;
        char *buffer = malloc (5 * sizeof(char));
        if (buffer == NULL){
            printf("Memory Allocation failed!\n");
            return 1;
        }        
       
        ssize_t n = read(0, buffer, 5);
        if (n <= 4){ 
            max_guesses --;
            break;
        }
        else
            buffer[n] = '\0';

        int guess_num = atoi(buffer);
        if (guess_num == 0) {
            printf("Wrong input passed.\n");
            max_guesses --;
            continue;
        }
        else
            convert_str_to_int(guess, buffer);

        for (int i = 0; i < CODE_SIZE; i++) 
        {
            if (hidden_code[i] == guess[i])
                well_placed ++;
            else
            {
                for (int j = 0; j < CODE_SIZE; j++)
                {
                   if (hidden_code[i] == guess[j] && i !=j)
                   {
                       misplaced ++;
                       break;
                   }
                }
            }
        }
        if (well_placed == 4)
            {
                printf("Congratz! You did it!\n");
                break;
            }
        else
            printf("Well placed pieces: %d\nMisplaced pieces: %d\n", well_placed, misplaced);
                max_guesses --;
        free(buffer);
    }
   free(hidden_code);
   free(guess);
   return 0;
}
