#include <stdio.h>
/**
 * main - print alphabets in reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
