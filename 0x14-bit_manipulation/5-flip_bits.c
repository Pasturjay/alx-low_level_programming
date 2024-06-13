#include "main.h"


/**
 * flip_bits - convert real number to binary.
 * @n: is the integer
 * @m: is the second integer
 *
 * Return: binary.
 **/


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int i = 0;

	while (result != 0)
	{
		if (result & 1)
		{
			i++;
		}
		result >>= 1;
	}
	return (i);
}
