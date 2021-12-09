#include "shell.h"

/**
 * _puts -  prints a string
 * @str: string to print
 * Return: Nothing.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
