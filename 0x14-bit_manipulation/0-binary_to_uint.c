#include "main.h"


/**
 * binary_to_uint - to convert binery to real number
 * @b: binary
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int j;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0')
		{
			result = (result << 1);
		}
		else if (b[j] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
