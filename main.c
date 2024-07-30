#include "main.h"

int main() {
	int age = 30;
	_printf("I am %d years old.\n", age);
	_printf("Printing a percent sign: %%\n");
	_printf("Testing large number: %d\n", 2147483647);
	_printf("Testing small number: %d\n", -2147483648);
	_printf("Printing a character: %c\n", 'A');
	_printf("Printing a string: %s\n", "Hello, World!");
	_printf("Printing a NULL string: %s\n", NULL);
	_printf("Printing double percent: %%\n");
	return 0;
}
