#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @C: The character to print
 *
 * Return: On success 1.
 *	on error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char C)
{
	return (write(1, &c, 1));
}