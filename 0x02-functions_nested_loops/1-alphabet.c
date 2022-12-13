#include "main.h"
/**
 * print_alphabet - print lowercase then newline
 * Return: 0 (SUccess)
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
