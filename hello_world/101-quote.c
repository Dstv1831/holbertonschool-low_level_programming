#include <unistd.h>

/**
 * main - Prints the message on the Standard Error
 *
 * Return: 1 Succes
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
