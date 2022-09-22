#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to a changeable character
 * @src: pointer to another changeable character
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}

