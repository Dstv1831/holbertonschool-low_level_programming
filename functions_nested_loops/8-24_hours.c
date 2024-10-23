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
	int s, m, h, H;

	s = 0;
	m = 0;
	h = 0;
	H = 0;

	while (H < 2)
	{
		_putchar('0' + H);
		while (h < 9)
		{
			_putchar('0' + h);
			while (m < 60)
			{
				_putchar('0' + m);
				while (s < 60)
				{
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
