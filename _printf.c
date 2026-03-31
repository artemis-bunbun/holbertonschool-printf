#include "main.h"

int _printf(const char *format, ...)
{
	int index;
	int numchar = 0;
	char c;

	if(format == NULL)
	{
		return(-1);
	}
	for(index = 0; format[index] != '\0'; index++)
	{
		c = format[index];
		write(1, &c, 1);
		numchar++;
	}
	return(numchar);
}