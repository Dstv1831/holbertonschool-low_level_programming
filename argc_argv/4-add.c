#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers.
 *
 * @argv: Vector of strings (program arguments)
 * @argc: Argument counter
 *
 * Return: success 0
 */

int main(int argc, char *argv[])
{
	/**
	 * argv[] - is an array of strings
	 * and those strings are arrays themselves
	 */

	int res = 0, value, i;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (value = 0; argv[i][value] != '\0'; value++)
				if ((argv[i][value]) < '0' || argv[i][value] > '9')
				{
					printf("Error\n");
					return (1);
				}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}

