#include "main.h"
/**
 *_strlen-Find the length of a string
 *@s:String pointer
 *Return: returns the lenght of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
