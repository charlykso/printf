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
	int i, j;
	char null[] = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == NULL)
		{
			for (j = 0; nill[j]; j++)
			{
				count += _putchar(nill[j]);
				return (count);
			}
		}
		count += _putchar(str[i]);
	}
	return (count);
}
