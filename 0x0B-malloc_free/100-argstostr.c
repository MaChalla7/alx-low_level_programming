#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *r;
	int n, m, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0, total = 0; n < ac; n++)
	{
		for (m = 0; *(*(av + n) + m) != '\0'; m++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	r = a;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			*a = av[n][m];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (r);
}
