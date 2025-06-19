#include <stdio.h>
#include "main.h"
/**
 * _islower - Function that checks if character is lowercase
 * @c: The character to be cheked
 *
 * Return: 1 for success 0 for fail
 */
int _islower(int c)
{
	if (c >= 95 && c <= 122)
		return (1);
	else
		return (0);
}
