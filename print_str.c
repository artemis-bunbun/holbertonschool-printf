#include "main.h"
/**
 * print_char - prints a character
 * @args: va_list containing the character to print
 * Return: number of characters printed
 */
int print_char(va_list args)
{
char c = (char)va_arg(args, int);
write(1, &c, 1);
return (1);
}

/**
 * print_str - prints a string
 * @string: va_list containing the string to print
 * Return: number of characters printed
 */

int print_str(va_list string)
{
int c = 0;
char *s;
s = va_arg(string, char *);
if (s == NULL)
s = "(null)";
for (; s[c] != '\0'; c++)
write(1, &s[c], 1);
return (c);
}
