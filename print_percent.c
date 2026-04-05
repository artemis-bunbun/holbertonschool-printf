#include "main.h"

/**
 * print_percent - handle the percent format specifier
 * @vargs: argument list pointer
 *
 * Return: 1 on success
 */
int print_percent(va_list vargs)
{
	(void)vargs;
	return (write(1, "%", 1));
}
