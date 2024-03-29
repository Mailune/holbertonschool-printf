#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)	/* Defines main function. */
{
	int len;	/* Stores lengths of printed output. */
	int len2;	/* Stores lengths of printed output. */
	unsigned int ui;	/* Stores unsigned integer value. */
	void *addr;	/* Stores memory address. */

	len = _printf("Let's try to printf a simple sentence.\n");/* Custom printf*/
	len2 = printf("Let's try to printf a simple sentence.\n");/* Standard printf*/
	ui = (unsigned int)INT_MAX + 1024;	/* Calculates unsigned int value. */
	addr = (void *)0x7ffe637541f0;	/* Assigns memory address. */
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	printf("\"(Ôo)'\n");
	_printf("\"(Ôo)'\n");


	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
