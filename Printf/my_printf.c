#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int my_printf(const char *pip, ...) {
    va_list my_mere;
    va_start(my_mere, pip);

    int ddu = 0;

    while (*pip) {
        if (*pip == '%') {
            pip++; 
            switch (*pip) { 
                case 'd': {
                    int ddu_arg = va_arg(my_mere, int); 
                    if (ddu_arg < 0) { 
                        ddu += write(1, "-", 1);
                        ddu_arg = -ddu_arg;
                    } else if (ddu_arg == 0) { 
                        ddu += write(1, "0", 1);
                        break;
                    }
                    char buffer[32];
                    char *ptr = buffer + 31;
                    *ptr = '\0';
                    while (ddu_arg > 0) { 
                        *--ptr = ddu_arg % 10 + '0';
                        ddu_arg /= 10;
                    }
                    ddu += write(1, ptr, strlen(ptr)); 
                    break;
                }
                case 'o': { 
                    unsigned int stacker = va_arg(my_mere, unsigned int); 
                    char buffer[32];
                    char *ptr = buffer + 31;
                    *ptr = '\0';
                    while (stacker > 0) { 
                        *--ptr = stacker % 8 + '0';
                        stacker /= 8;
                    }
                    ddu += write(1, ptr, strlen(ptr)); 
                    break;
                }
                case 'u': { 
                    unsigned int value = va_arg(my_mere, unsigned int); 
                    char buffer[32];
                    char *ptr = buffer + 31;
                    *ptr = '\0';
                    while (value > 0) { 
                        *--ptr = value % 10 + '0';
                        value /= 10;
                    }
                    ddu += write(1, ptr, strlen(ptr)); 
                    break;
                }
                case 'x': { 
                    unsigned int input = va_arg(my_mere, unsigned int); 
                    char buffer[32];
                    char *ptr = buffer + 31;
                    *ptr = '\0';
                    while (input > 0) { 
                        char c = input % 16;
                        if (c < 10) {
                            *--ptr = c + '0';
                        } else {
                            *--ptr = c - 10 + 'A'; 
                        }
                        input /= 16;
                    }
                    ddu += write(1, ptr, strlen(ptr)); 
                    break;
                }
                 case 'c': {
                    char value = va_arg(my_mere, int);
                    ddu += write(1, &value, 1);
                    break;
                 }
                 case 's' : {
                     const char *value = va_arg(my_mere, const char*);
                     if (value == NULL) {
                         ddu += write(1, "(null)", 6);
                     } else {
                         ddu += write(1, value, strlen(value));
                     }
                     break;
                 }
                 case 'p' : {
                     void *value_arg = va_arg(my_mere, void*);
                     unsigned long long arr = (unsigned long long)value_arg;
                     char buffer[32];
                     char *ptr = buffer + 31;
                     *ptr = '\0';
                     while (arr > 0) {
                         char c = arr % 16;
                         if (c < 10) {
                             *--ptr = c + '0';
                         } else {
                             *--ptr = c - 10 + 'a';
                         }
                         arr /= 16;

                     }
                     ddu += write(1, "0x", 2);
                     ddu += write(1, ptr, strlen(ptr));
                     break;
            }
                }
        } else {
            ddu += write(1, pip, 1);
        }
        pip++;
    }

    va_end(my_mere);
    return ddu;
}
