#include "main.h"

/**
* power - a function that returns it's power
* @base: the base
* @x: the number that is reaise
*
*Return: the result after raising to power
*/

long long int power(int base, int x)
{
	int result = 1;

	for (; x > 0; x--)
	{
		result = result * base;
	}
	return (result);
}
