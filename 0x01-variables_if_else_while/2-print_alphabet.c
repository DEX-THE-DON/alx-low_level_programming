#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Display characters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dex;

	for (dex = 'a'; dex <= 'z'; dex++)
{
		putchar(dex);
		putchar('\n');
}

	return (0);
}
