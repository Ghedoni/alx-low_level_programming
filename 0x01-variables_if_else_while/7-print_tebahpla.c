#include <stdio.h>
/**
 * main - Prints alphabets in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}

