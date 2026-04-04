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

#endif /* MAIN_H */
