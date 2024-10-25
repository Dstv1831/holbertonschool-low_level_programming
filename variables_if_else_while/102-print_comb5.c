#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num1, num2;

	num1 = 0;
	num2 = num1 + 1;

	while (num1 < 99)
	{
		while (num2 < 100)
		{
			putchar('0' + (num1 / 10));
			putchar('0' + (num1 % 10));
			putchar(' ');
			putchar('0' + (num2 / 10));
			putchar('0' + (num2 % 10));

			if (num1 == 98 && num2 == 99)
				break;
			putchar(',');
			putchar(' ');
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');

	return (0);
}

