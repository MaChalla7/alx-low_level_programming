#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int k, j;
	int o, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (k = 0; s1[k] != '\0'; k++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	m = malloc((k * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
	if (m == NULL)
		return (NULL);

	for (o = 0, c = 0; o < (k + j + 1); o++)
	{
		if (o < k)
			a[o] = s1[o];
		else
			a[o] = s2[c++];
	}

	return (m);
}
