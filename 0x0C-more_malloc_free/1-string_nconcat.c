#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings
 *
 * @s1: is a pointer to the first string
 * @s2: is a pointer to the second string
 * @n: an integer (6) with the limit of what we are going to add to s1
 *
 * Return: pointer to a newlly allocated memory with s1 & s2, NULL if it fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strings;
	unsigned int lengths1, lengths2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lengths1 = 0; s1[lengths1] != '\0'; lengths1++)
	{
	}
	for (lengths2 = 0; s2[lengths2] != '\0'; lengths2++)
	{
	}
	if (n > lengths2)
		n = lengths2;
	strings = malloc((lengths1 + n + 1) * sizeof(char));
	if (strings == NULL)
		return (NULL);
	for (lengths1 = 0; s1[lengths1] != '\0'; lengths1++)
		strings[lengths1] = s1[lengths1];
	for (lengths2 = 0; lengths2 < n; lengths2++, lengths1++)
	strings[lengths1] = s2[lengths2];
	strings[lengths1] = '\0';
	return (strings);
}
