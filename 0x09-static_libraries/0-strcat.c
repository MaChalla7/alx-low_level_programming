#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int a, n;

	for (a = 0; dest[a] != '\0'; a++)
		;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[a] = src[n];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
