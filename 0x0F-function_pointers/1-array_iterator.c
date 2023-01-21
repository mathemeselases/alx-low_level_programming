#include "function_pointers.h"
/**
 * array_iterator - executes a functionas parameter of each element of an array
 *
 * @array: pointer to an int
 * @size: variable type size_t
 * @action: pointer to a function that receives an int
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int elements;
if (action && array)
{
for (elements = 0; elements < size; elements++)
action(array[elements]);
}
}
