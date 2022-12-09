#include <stdio.h>
/**
 * main - print a - z excluding e and q
 * Return: 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
	}
	putchar('\n');

	return (0);
}
