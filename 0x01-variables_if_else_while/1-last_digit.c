#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Check if num is > 5 , < 6 or zero
 * Return: 0 on sucessful execution
 */

int main(void)
{
	int n;
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	else if (num < 6 && num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	else
		printf("Last digit of %d is %d and is 0\n", n, num);

	return (0);
}
