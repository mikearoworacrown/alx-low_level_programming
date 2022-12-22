#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: n bytes from source
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; ++i)
		;
	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
			j++;
	}
	return (dest);
}
