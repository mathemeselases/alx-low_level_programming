#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - adds numbers. checks if number
* @argc: number of arguments
* @argv: the vector that hold the arguments
*
* Description: using arc and argv to achieve the intended function
* Return: returns 0 if it works or something else if error
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1;
	int j;

	if (argc == 1)/* A */
	{
		printf("0\n");
		return (0);
	}
	while (argc > 1)/* B */
	{
		j = 0;
		while (argv[i][j])/* C */
		{
			if (!isdigit(argv[i][j]))/* D */
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);/* E */
		i++;
		argc--;
	}
	printf("%i\n", sum);
	return (0);
}
