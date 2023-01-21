#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: pointer to an int array
 * @size: number of elements in the array 'array'
 * @cmp: pointer to a function that receives an int
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int elements;
int index;
if (array != NULL && cmp != NULL)
{
if (size <= 0)
return (-1);
for (elements = 0; elements < size; elements++)
{
index = cmp(array[elements]);
if (index > 0)
return (elements);
}
}
return (-1);
}
