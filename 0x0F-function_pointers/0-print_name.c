#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints names as it is
 * @name: name of a person
 * @f: is pointer
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	ese
	{
		f(name);
	}
}
