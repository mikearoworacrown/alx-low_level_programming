#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @num: convert integer
 * Return: absolute value
 */
int _abs(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}
