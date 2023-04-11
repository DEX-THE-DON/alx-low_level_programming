#include "main.h"
#include<stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of *s characters
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	x = malloc(size * sizeof(char));

	if (x == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);

}
