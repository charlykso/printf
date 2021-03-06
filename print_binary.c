#include "main.h"

/**
* print_binary - a function that converts decimal to binary
* @number: the number to be converted
*
* Return: the count number of the binary
*/

int print_binary(int number)
{
	int arr[32], count = 0;
	int i = 0;

	if (number < 0)
		return (-1);
	while (number >= 2)
	{
		arr[i] = number % 2;
		number /= 2;
		i++;
	}
	arr[i] = number;

	for (; i >= 0; i--)
	{
		count += _putchar(arr[i] + '0');
	}
	return (count);
}
