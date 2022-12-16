#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - Assign random number when excuted
 * @i: test digit
 * Return: 0 (Success)
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
	else if (i > 0)
	{
		printf("%d is %s\n", i, "positive");
	}
	else
	{
		printf("%d is %s\n", i, "zero");
	}
}
