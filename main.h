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