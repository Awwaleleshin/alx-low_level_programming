#include "main.h"
/**
 * main - Entry point
 * print_alphabet - utilixes on the -putchar function to print the alphabet a - z
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
