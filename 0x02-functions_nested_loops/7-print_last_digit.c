#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number parameter
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last = 0;
	
	if (n < 0)
		n = n * -1;
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
