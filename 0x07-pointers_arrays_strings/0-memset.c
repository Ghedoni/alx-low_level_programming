#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @dest: memory where is stored
 * @src: starting address of memory to be filled
 * @n: the desired value
 * Return: change array with the new value of n byte
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
