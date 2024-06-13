#include "main.h"

/**
 * clear_bit - convert real number to binary.
 * @n: is the integer
 * @index: the lenght of the integer.
 *
 * Return: binary.
 **/




int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = 8 * sizeof(unsigned long int);
	unsigned long int i = ~(1UL << index);

	if (n == NULL  || index >= size)
	{
		return (-1);
	}
	*n &= i;
	return (1);
}
