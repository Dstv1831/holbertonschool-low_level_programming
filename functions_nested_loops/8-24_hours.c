#include "main.h"

/**
 * jack_bauer - Prints every minute
 * of the day, starting from
 * 00:00 to 23:59.
 *
 * Return: Every minute in a new line.
 */

void jack_bauer(void)
{
	int m, h;

	m = 0;
	h = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (m / 10));
			_putchar('0' + (m % 10));
			_putchar('\n');
			m++;
		}
		h++;
		m = 0;
	}
}
