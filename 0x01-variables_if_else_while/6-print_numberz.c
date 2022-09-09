#include <stdio.h>
/**
 * main-Entry point for the program
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);
	return (0);
}
