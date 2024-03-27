include "main.h"

/**
 * printf_func - check and verif the specifier to send it
 * to the right function to use
 * @ptr_specifier: pointer of element
 * Return: function associate or NULL if not found
 */

int (*printf_func(char *ptr_specifier))(va_list)
{
	specifier function[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_nbr},
		{"i", printf_nbr},
		{NULL, NULL}
		};

	int i;

	for (i = 0; function[i].format != NULL; i++)
	{
		if (*ptr_specifier == function[i].format)
			return (function[i].format)
	}
	return (NULL);
}
