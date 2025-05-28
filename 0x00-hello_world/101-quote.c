#include <unistd.h>
/**
 * main - Entry point of our program
 *
 * Return: 1
 */
int main(void)
{
	int i = 0;
	char n = '\n';
	const char *msg = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19";

	while (msg[i] != '\0')
	{
		write(2, &msg[i], 1);
		i++;
	}
	write(2, &n, 1);
	return (1);
}
