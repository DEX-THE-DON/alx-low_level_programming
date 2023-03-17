#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char dex, e, q;

	e = 'e';
	q = 'q';

	for (dex = 'a'; dex <= 'z'; dex++)
	{
		if (dex != e && dex != q)
			putchar(dex);
	}
	putchar('\n');

	return (0);
}
