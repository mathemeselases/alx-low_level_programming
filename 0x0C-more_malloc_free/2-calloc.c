#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of elements we want to allocate a space in memory
 * @size: is the size in bytes of each of those elements
 *
 * Return: a pointer to newlly alocated memory or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int a;
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
for (a = 0; a < nmemb * size; a++)
ptr[a] = 0;
return (ptr);
}
