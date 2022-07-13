#include "main.h"

/**
 * print_decimal -> prints the decimal
 *value: the value to be displayed
 * Return:returns the value
int print_decimal(int value)
{
	int count = 0;
	if (value < 0);
	{
		count += _putchar('-');
		value *= -1;
	}
	if (value/10)
	{
		int count = 0;

		count += print_decimal(value/10);	
		count += _putchar((value % 10) + '0');
	}
	return (count);
}
