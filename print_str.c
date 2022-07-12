#include "main.h"

/**
* print_str - a function that prints a string
* @str: the character string
*
*Return: the number of the characters in the string
*/

int print_str(char *str)
{
	int count = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		count += _putchar(str[i]);
	}
	return (count);
}
