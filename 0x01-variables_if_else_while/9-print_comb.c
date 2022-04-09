#include <stdio.h>

/**
 * main - combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}
	while (c != 9)
	{
		putchar(',');
		putchar('');
	}
	putchar(10);
	return (0);
}
