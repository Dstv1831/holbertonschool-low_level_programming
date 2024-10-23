#include <unistd.h>

int main(void)
{
	char *buffer = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write (2, buffer, 59);
	return (1);
}
