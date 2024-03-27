include "main.h"

/**
 * printf_nbr - print a number
 * @args: args
 * Return: len1 + len2
 */

int printf_nbr(va_list args)
{
	int i, temp, digit, divide = 1, len1 = 0, len2 = 0;
	int num = va_arg(args, int);

	if (num == 0) /*si num = 0 alors afficher 0*/
	{
		_putchar('0');
		return (1);
	}
	if (num == INT_MIN) /*si num est int_min alors afficher -2 puis le int max*/
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		len2 = 2;
	}
	if (num < 0) /*si num<0 -> afficher - puis le nombre en sa valeur absolue*/
	{
		_putchar('-');
		num = -num;
		len2 = 1;
	}
	temp = num; /*valeur de num dans une variable temporaire*/
	while (temp != 0) /*divise par dix jusqu'à 0 pour compter le nbr de digit*/
	{
		temp /= 10;
		len1++;
	}
	divide = 1;
	for (i = 1; i < len1; i++) /*extraire chaque digit grâce à étape prec*/
		divide = divide * 10;
	while (divide != 0) /*écrit chaque digit un par un*/
	{
		digit = num / divide;
		num = num % divide;
		divide = divide / 10;
		_putchar(digit + '0');
	}
	return (len1 + len2);
}

