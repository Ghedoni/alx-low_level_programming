#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memset(char *s, char *b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++;)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
