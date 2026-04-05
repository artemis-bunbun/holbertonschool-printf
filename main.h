#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
/**
 * struct choice - links specifier to handler function
 * @specifier: the format character (c, s, %, d...)
 * @func: pointer to the handler function
 */
typedef struct choice
{
	char specifier;
	int (*func)(va_list args);
} Specifier;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
#endif
