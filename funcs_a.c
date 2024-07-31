#include "main.h"

/**
 * print_char - Writes a character to the stdout
 * @c: The character to print
 *
 * Return: Number of chars printed (always 1)
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Writes a string to stdout
 * @str: The string to print
 *
 * Return: Number of characters printed
 */

int print_string(const char *str)
{
	int len = 0;

	if (str == NULL)
	{
		str = "(null)"; /* to hanlde null strings */
	}
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

/**
 * print_integer - Writes a integer to stdout
 * @um: The integer to print
 *
 * Return: Number of charcters printed
 */

int print_integ(int num)
{
	 int count = 0;
	 char buffer[12];
	 char *ptr = buffer + 11;
	 unsigned int n;

	 *ptr = '\0';
	 n = (num < 0) ? -num : num;

	 do
	 {
		 *--ptr = '0' + (n % 10);
		 n /= 10;
		 count++;
	 }
	 while (n != 0);

	 if (num < 0)
	 {
		 *--ptr = '-';
		 count++;
	 }
	 while (*ptr)
	 {
		 _putchar(*ptr++);
	 }
	 return (count);
}
