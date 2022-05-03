#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument counter to an int
 * @argv: argument vaue determiner for char
 * Return: Return always success
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
