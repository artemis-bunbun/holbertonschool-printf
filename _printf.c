#include "main.h"

/**
 * _printf - prints formatted output
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;
	Specifier speci_array[] = {
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}


			for (j = 0; speci_array[j].choice	!= '\0'; j++)

			for (j = 0; speci_array[j].choice != '\0'; j++)

			{
				if (format[i] == speci_array[j].choice)
				{
					count += speci_array[j].func(args);
					break;
				}
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}

