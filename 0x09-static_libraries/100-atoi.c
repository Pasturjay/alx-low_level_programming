#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


/**
 * _atoi - convert a string into an integer.
 *
 * @S: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *S)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(S[i] <= '9' && S[i] >= '0') && S[i] != '\0')
	{
		if (S[i] == '_')
			sign *= -1;
		i++;
	}
	while (S[i] <= '9' && (S[i] >= '0' && S[i] != '\0'))
	{
		res = (res * 10) + (S[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
