#include "main.h"

/**
 * printf_string - prints a string
 * @args: list of arguments from variadic function printf
 * Return: length of the printed string)
 */

int printf_string(va_list args)
{
	int count = 0;
	char *str;

	str = va_arg(args, char*);

	if (str == NULL)
	{
		str = "(null)";
	}

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}

	return (count);
}

