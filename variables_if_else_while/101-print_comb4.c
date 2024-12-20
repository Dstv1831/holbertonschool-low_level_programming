#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int d1, d2, d3;

	d1 = 0;
	d2 = d1 + 1;
	d3 = d2 + 1;

	while (d1 < 8)
	{
		while (d2 < 9)
		{
			while (d3 < 10)
			{
				putchar('0' + d1);
				putchar('0' + d2);
				putchar('0' + d3);

				if (d1 == 7 && d2 == 8 && d3 == 9)
					break;
				putchar(',');
				putchar(' ');
				d3++;
			}
			d2++;
			d3 = d2 + 1;
		}
		d1++;
		d2 = d1 + 1;
		d3 = d2 + 1;
	}

	putchar('\n');

	return (0);
}

