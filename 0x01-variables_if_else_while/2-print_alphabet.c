#include <stdio.h>
/**
 * main - Prints alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
