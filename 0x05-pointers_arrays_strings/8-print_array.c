#include "main.h"
#include <bits/stdc++.h>

/**
* print_array - prints n elements of an array of integers
* @n: number of element of the array to be printed
* @a: pointer of the array
*/
void print_array(int *a, int n)
{
	int arr[], int n;
	int a;

	for (a = 0; a <= n; a++)
	{
		printf("%d", a);
		if (a < n)
			printf(",");
	}
	printf("\n");
}
