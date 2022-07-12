#include "main.h"

/**
* convertToDecimal - a funtion that converst another base to base ten
* @number: the number to be converted
* @base: the base you want to convert it
*
*Return: the converted number
*/

long long convertToDecimal(int number, int base)
{
	int decimalNumber = 0, i = 0;

	while (number != 0)
	{
		decimalNumber += (number % 10) * power(base, i);
		++i;
		number /= 10;
	}
	i = 1;

	return (decimalNumber);
}
