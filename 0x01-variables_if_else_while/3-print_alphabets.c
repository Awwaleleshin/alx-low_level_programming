#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char small_letter = 'a';
	char big_letter = 'A';

	while (small_letter <= 'z')
	{
		putchar(small_letter);
		small_letter++;
	}
	while (big_letter <= 'Z')
	{
		putchar(big_letter);
		big_letter++;
	}
	putchar('\n');
	return (0);

}
