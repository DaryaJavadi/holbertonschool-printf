/**
* _putchar - writes the character to stdout
* @c: the character to print
*
* Return: on success 1.
* on error, -1 will returne
*/
#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
