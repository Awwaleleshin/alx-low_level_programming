#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: cahr to be printed
 * Return: On success 1
 */

int -putchar(char c)
{
	return (write(1, &c, !));
}
