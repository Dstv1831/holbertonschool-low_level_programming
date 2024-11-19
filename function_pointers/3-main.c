# include <stdio.h>
# include <stdlib.h>
# include "3-calc.h"

/**
 * main - Prints the result of the operation
 * that was specified on the command line
 *
 * @argv: Vector of strings (program arguments)
 * @argc: Argument counter
 *
 * Return: 0 Succes
 *
 */

int main(int argc, char *argv[])
{
	int  num1, num2, res = 0;
	char *operator, msg[] = "Error";

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	if (argc != 4)
	{
		printf("%s\n", msg);
		exit(98);
	}
	else if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("%s\n", msg);
		exit(100);
	}
	else
	{
		res = get_op_func(operator)(num1, num2);
		printf("%d\n", res);
	}

	return (0);
}

