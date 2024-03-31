#include "main.h"

/**
*_printf - function to print
* @format: character string
* Return: charaters printed
*/

int _printf(const char *format, ...)	/* Defines _printf with format string. */
{
	int count = 0;	/* Initializes count of printed characters. */
	int (*search_func)(va_list);	/* Pointer to function for format specifier. */
	va_list listargs;	/* Declares a va_list for variable arguments. */

	va_start(listargs, format);	/* Initializes va_list with format. */

	if (format == NULL)	/* Checks if format string is NULL. */
		return (-1);	/* Returns -1 if format string is NULL. */

	while (*format != '\0')	/* Loops through format string until end. */
	{
		if (*format != '%') /* Checks if character is not a format specifier. */
		{
			_putchar(*format);	/* Prints non-format specifier character. */
			count++;	/* Increments count of printed characters. */
		}
		else
		{
			format++;	/* Moves past '%' to check for format specifier. */

			if (*format == '\0')	/* If '%' is at the end of format string */
			{
				_putchar('%');	/* Prints '%' character */
					return (-1);	/* to specify an error */
			}
			search_func = printf_func(format);	/* Searches for format specifier func */

			if (search_func != NULL)	/* Checks if format specifier function found. */
				count += search_func(listargs);	/* Print formatted output,updates count */
			else
			{
				_putchar('%');	/* Prints '%' character. */
				_putchar(*format);	/* Prints character following '%'. */
				count += 2;	/* Increments count for '%' and character. */
			}
		}
		format++;	/* Moves to next character in format string. */
	}
	va_end(listargs);	/* Ends va_list processing. */
	return (count);	/* Returns total count of printed characters. */
}
