#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: inputs parameters strings
 * @src: inputs parameters strings
 * @n: time to iterationd
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != 0)
	{
		a++;
	}
	b = 0;

	while (src[b] != 0 && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
