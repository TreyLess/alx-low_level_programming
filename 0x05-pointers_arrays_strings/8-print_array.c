#include "main.h"
#include <stdio.h>

/**
 * print_array - this function prints array
 * @a: first parameter
 * @n: second parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf('\n');
}
