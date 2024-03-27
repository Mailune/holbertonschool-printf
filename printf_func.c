#include "main.h"

/**
 * printf_func - check and verif the specifier to send it
 * to the right function to use
 * struct specifier - Represents a format specifier and its associated function
 * @ptr_specifier: pointer of element
 * Return: function associate or NULL if not found
 */

int (*printf_func(const char *ptr_specifier))(va_list)
{
	struct specifier function[] = {
		{'c', printf_char},
		{'s', printf_string},
		{'%', printf_percent},
		{'d', printf_nbr},
		{'i', printf_nbr},
		{'\0', NULL}
		};

	int i;

	for (i = 0; function[i].format != '\0'; i++)
	{
		if (*ptr_specifier == function[i].format)
			return (function[i].function);
	}
	return (NULL);
}
