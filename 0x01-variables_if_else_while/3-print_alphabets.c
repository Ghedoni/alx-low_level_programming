#include <stdio.h>
/**
 * main - Prints alphabets
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}

