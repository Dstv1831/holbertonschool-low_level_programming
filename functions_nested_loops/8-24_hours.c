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
	int s, m, h, H, i;

	s = 0;
	m = 0;
	h = 0;
	H = 0;

	for (i = 0; i <= 1440; i++)
	{
		while (H < 2)
		{
			while (h < 10)
			{
				while (m < 6)
				{
					while (s < 10)
					{
						_putchar('0' + H);
						_putchar('0' + h);
						_putchar(':');
						_putchar('0' + m);
						_putchar('0' + s);
						_putchar('\n');
						s++;
					}
					m++;
				}
				h++;
			}
			H++;
		}
	}
}
