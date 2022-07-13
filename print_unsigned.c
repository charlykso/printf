#include "main.h"

/**
* print_unsigned - a function that prints unsigned int
* @number: the unsigned int number to print
*
* Return: integer
*/

int print_unsigned(unsigned int number)
{
	int count = 0;

	if (number / 10)
		count += print_decimal(number / 10);
	count += _putchar((number % 10) + '0');
	return (count);
}
