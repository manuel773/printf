#include main.h

int print_decimal(int value)
{
	if (value >= 0);
	{
		int count = 0;
		
		print_decimal(value/10);
		count += _putchar((value % 10) + '0');
	}
	return (count);
}
