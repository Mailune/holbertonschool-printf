#include "main.h"

/**
 * printf_char - prints a character
 * @args: the list of arguments from variadic function printf
 * Return: 1, length of the printed character)
 */
int printf_char(va_list args) /* func printf_char taking va_list argument */
{
	char character = va_arg(args, int);	/* Retrieves next va_list arg as int */

	_putchar(character);	/* Prints character using _putchar. */
	return (1);	/* Returns 1 for single character printed. */
}
