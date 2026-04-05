#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
/**
 * struct choice - links specifier to handler function
 * @choice: the format character (c, s, %, d...)
 * @func: pointer to the handler function
 */
typedef struct choice
{
	int choice;
	int (*func)(va_list args);
} Specifier;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
#endif
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct choice
{
	char choice;
	int (*func)(va_list args);
} Specifier;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_percent(va_list args);

#endif
