#include "main.h"

/**
* print_array - prints n elements of an array of integers
* @n: number of element of the array to be printed
* @a: pointer of the array
*/
void print_array(int *a, int n)
{
	int arr[n];
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", i);
		if (i < n)
			printf(",");
	}
	printf("\n");
}
