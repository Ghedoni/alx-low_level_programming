#include <stdio.h>
/**
 * main - possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x1;
	int x2;
	int y1;
	int y2;

	for (x1 = 0; x1 < 10; ++x1)
	{
	for (x2 = 0; x2 < 10; ++x2)
	{
	for (y1 = x1; y1 < 10; ++y1)
	{
	for (y2 = ((x1 == y1) ? (x2 + 1) : 0);
			{
			{
			putchar('0' + x1);
			putchar('0' + x2);
			putchar(32);
			putchar('0' + y1);
			putchar('0' + y2);
			if (x1 != 9 || x2 != 8 || y1 != 9 || y2 != 9)
			{
			putchar(',');
			putchar(32);
			}
			}
			}
			}
			}
			}
			putchar(10);
			return (0);
			}
