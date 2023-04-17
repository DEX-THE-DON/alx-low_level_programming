#include <stdio.h>



#include <stdio.h>
#include <string.h>
 
char *_memset(char *s, char b, unsigned int n)

	// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void printArray(int arr[], int n)
{
for (int i=0; i<n; i++)
	printf("%d ", arr[i]);
}

int main()
{
	int n = 10;
	int arr[n];

	// Fill whole array with 100.
	memset(arr, 10, n*sizeof(arr[0]));
	printf("Array after memset()\n");
	printArray(arr, n);

	return 0;
}


char *_memset(char *s, char b, unsigned int n)
{

