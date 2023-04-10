#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for my program
 * @argc: This is the number of arguments
 * @argv: This is the array of arguments
 *
 * Return: Zero upon program success
 */


int main( int argc, char *argv[] )
{
	long result = 1;

	for ( int i = 1; i < argc; i++ )
	{
	long num;
	char *p;
	errno = 0;
	num = strtol( argv[i], &p, 10 );
	if ( p == argv[i] )
	{
		fprintf( stderr, "Conversion of argv[%d] failed!\n", i );
	exit( EXIT_FAILURE );
	}
	if ( errno == ERANGE )
	{
		fprintf( stderr, "Argument of argv[%d] out of range!\n", i );
		exit( EXIT_FAILURE );
	}
	result = result * num;
	}
	printf( "%ld\n", result );

	return EXIT_SUCCESS;
}
