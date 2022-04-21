#include "main.h"
/*
 * swap_int - swaps the values of two integers
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int first, second;
	first = *a;
	second = *b;
	*a = second;
	*b = first;
}
