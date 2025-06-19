#include <stdio.h>
#include "main.h"
/**
 * _abs - Function that returns absolute value of a number
 * @n: The data type of input parameter
 *
 * Return: 0 on sucess of the program
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
	return (0);
}

