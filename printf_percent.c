#include "main.h"

/**
 * printf_percent - prints a percent character
 * @args: list of arguments from variadic function printf
 * Return: 1, length of the % char
 */

int printf_percent(va_list args)	/* Defines printf_percent taking va_list. */
{
	(void) args;	/* Ignores unused argument to avoid compiler warning. */

	_putchar('%');	/* Prints percent character using _putchar. */
	return (1);	/* Returns 1 for length of percent character. */
}
