#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct choice
{
	char choice;
	int (*func)(va_list args);
} Specifier;

int print_str(va_list args);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_percent(va_list args);

#endif
