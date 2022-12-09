#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - random number, chek last digit at every execution
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char lastDigitOf[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The %s %d is %d and is ", lastDigitOf, n, n % 10);

	if (n % 10 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 10 == 0)
	{
		printf("0\n ");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}