#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number parameter
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last = 0;

	last = abs(n % 10);
	_putchar(last + '0');
	return (last);
}
