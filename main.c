#include "main.h"
#include <stdio.h>

int main(void)
{
    int total;

    total = _printf("Character: %c\n", 'A');
    _printf("Printed %d characters\n", total);

    total = _printf("String: %s\n", "Hello, world!");
    _printf("Printed %d characters\n", total);

    total = _printf("Percentage: %%\n");
    _printf("Printed %d characters\n", total);

    total = _printf("Combined: %c and %s\n", 'B', "Goodbye!");
    _printf("Printed %d characters\n", total);

    total = _printf("No format specifiers\n");
    _printf("Printed %d characters\n", total);

    return 0;
}
