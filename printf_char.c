#include "main.h"

/**
 * printf_char - prints a character
 * @args: the list of arguments from variadic function printf
 * Return: 1, length of the printed character)
 */
int printf_char(va_list args)
{
	char character = va_arg(args, int);

	_putchar(character);
	return (1);
}
