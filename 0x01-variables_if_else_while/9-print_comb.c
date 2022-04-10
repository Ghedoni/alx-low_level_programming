#include <stdio.h>

/**
 * main - combinations of single-digit numbers
 * Return: Always (Success)
 */
int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
	while (c != 9)
	{ 
		putchar(',');
		putchar(32);
		c++;	
	}
	}
	putchar(10);
	return (0);
}
