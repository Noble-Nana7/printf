#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);

/**
 * prototypes of function implementations to print to the stdout
 */

int print_char(char c);
int print_string(const char *str);
int _putchar(char c);
int print_integ(int num);
int print_binr(unsigned int num);
#endif
