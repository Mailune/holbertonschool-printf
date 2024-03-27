#include "main.h"

/**
 * printf_percent - prints a percent character
 * @args: list of arguments from variadic function printf
 * Return: 1, length of the % char
 */

int printf_percent(va_list args)
{
	(void) args;

	_putchar('%');
	return (1);
}
