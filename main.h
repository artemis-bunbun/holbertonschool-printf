#ifndef MAIN_H
#define MAIN_H

/* Includes nécessaires */
#include <stdio.h>      /* pour printf et write */
#include <stdlib.h>     /* pour malloc, free */
#include <stdarg.h>     /* pour va_list */
#include <unistd.h>     /* pour write */



typedef struct choice
{
	int choice;
	int (*func)(va_list args);
} Specifier;

/* Prototypes de fonctions personnalisées */

/* Fonction principale printf */
int _printf(const char *format, ...);

/* Affiche un caractère */
int _putchar(char c);

/* Affiche une chaîne de caractères */
int _putstr(char *str);

int _printf(const char *format, ...);
int print_char(va_list args);
int print_percent(va_list vargs);

#endif /** MAIN_H */
