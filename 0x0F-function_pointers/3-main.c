#include "3-calc.h"
/**
 * main - performs simple operations
 *
 * @argv: pointer to the argument that enter from the user as char type
 * @argc: tell us the amount of arguments int type
 *
 * Return: an integer with the result of a operation
 */
int main(int argc, char *argv[])
{
	int (*funoperator)(int a, int b);
	
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(argv[2]);
	if (!funoperator || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", funoperator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
