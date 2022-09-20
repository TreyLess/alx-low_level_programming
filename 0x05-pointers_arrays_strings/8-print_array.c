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

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
