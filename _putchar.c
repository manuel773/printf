#include<unistd.h>

/**
 * _putchar - writes the character c to stdou
 * @c:character argument
 * Return: if success 1
 *	if failure -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
