#include <stdio.h>
/**
 * main - Print Hexadecimal
 *
 * Return: Always (Success)
 */

int main(void)
{
	int i = 48;
	int j = 97;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (j <= 102)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
