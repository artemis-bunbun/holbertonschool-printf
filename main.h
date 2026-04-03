
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


typedef struct choice 
{
	int choice;
	int (*func)(va_list args);

} Specifier;

int _printf(const char *format, ...);
int print_char(va_list args);

#endif /* MAIN_H */	
#ifndef MAIN_H          /* Si MAIN_H n'est pas encore défini */
#define MAIN_H          /* Définit MAIN_H */

/* Includes nécessaires */
#include <stdio.h>      /* pour printf et write */
#include <stdlib.h>     /* pour malloc, free */
#include <stdarg.h>     /* pour va_list */
#include <unistd.h>     /* pour write */

/* Prototypes de fonctions personnalisées */

/* Fonction principale printf */
int _printf(const char *format, ...);

/* Affiche un caractère */
int _putchar(char c);

/* Affiche une chaîne de caractères */
int _putstr(char *str);


#endif /* MAIN_H */

