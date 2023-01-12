#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - create an array of integers from 0 to 10
 *
 * @min: integer with 0 according to the main
 * @max: integer with 10 according to the main
 *
 * Return: a pointer to the new array or NULL if it fail
 */
int *array_range(int min, int max)
{
	int *newarray;
	int positions;
	int runner;

	if (min > max)
		return (NULL);
	positions = max - min + 1;
	newarray = malloc(positions * sizeof(int));
	if (newarray == NULL)
		return (NULL);
	for (runner = 0; runner < positions; runner++, min++)
		newarray[runner] = min;
	return (newarray);
}
