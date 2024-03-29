#include "variadic_functions.h"
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: a pointer to the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int runner;
	va_list valist;
	char *string;

	va_start(valist, n);
	for (runner = 0; runner < n; runner++)
	{
		string = va_arg(valist, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (runner + 1 < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(valist);
}
