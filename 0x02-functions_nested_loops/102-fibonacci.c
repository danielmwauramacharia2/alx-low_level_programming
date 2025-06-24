#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point to the program
 *
 * Description: Prints first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	long int next = 0, first = 1, second = 2;

	printf("%ld, %ld, ", first, second);
	while (i < 48)
	{
		next = first + second;
		if (i != 47)
			printf("%ld, ", next);
		else
			printf("%ld\n", next);
		first = second;
		second = next;
		i++;
	}
	return (0);
}

