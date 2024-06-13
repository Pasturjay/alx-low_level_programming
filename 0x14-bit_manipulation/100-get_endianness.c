#include "main.h"

/**
 * get_endianness - convert real number to binary.
 * Return: 0.
 **/

int get_endianness(void)
{
	unsigned int k = 1;
	char *byte = (char *)&k;

	if (*byte)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
