#include "main.h"
/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Return: 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
