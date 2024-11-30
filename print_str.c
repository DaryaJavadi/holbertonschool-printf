/**
 * print_string - prints a string
 * @ptr: pointer to the string to be printed
 *
 * Return: length
 */
#include "main.h"
int print_string(char *ptr)
{
	int len = 0;

	if (ptr == (char *)0)
	{
		print_string("(null)");
		return (6);
	}

	while (ptr[len])
	{
		_putchar(ptr[len]);
		len++;
	}

	return (len);
}
