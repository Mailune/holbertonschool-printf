#include "main.h"

/**
*_printf - function to print
* @format: character string
* Return: charaters printed
*/

int _printf(const char *format, ...)
{
	int count = 0;
	int (*search_func)(va_list);
	va_list listargs;

	va_start(listargs, format);

	if (format == NULL)
		return (-1);

	while (*format != '\0')
	{
		if (*format != '%')
		{
			_putchar(*format);
			count++;
		}
		else
		{
			format++;
			search_func = printf_func(format);

			if (search_func != NULL)
				count = count + search_func(listargs);
			else
			{
				_putchar('%');
				_putchar(*format);
				count = count + 2;
			}
		}
		format++;
	}
	va_end(listargs);
	return (count);
}
