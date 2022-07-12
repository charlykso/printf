#include "main.h"

/**
* print_decimal - a function that prints base ten numbers
* @value: the integer to be printed
*
* Return: the number count of the integer
*/

int print_decimal(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = value * (-1);
	}

	if (value / 10)
	{
		count += print_decimal(value / 10);
	}
	count += _putchar((value % 10) + '0');

	return (count);
}
