#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: find last digit
 * Return: The last digit of a number.
 */
int print_last_digit(int n)
{
	int absn;

	if (n < 0)
	{
		absn = n * -1;
	}
	else
	{
		absn = n;
	}
	_putchar((absn % 10) + '0');
	return (absn % 10);
}
