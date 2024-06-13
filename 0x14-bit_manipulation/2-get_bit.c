#include "main.h"


/**
 * get_bit - convert real number to binary.
 * @n: is the integer
 *@index: the lenght of the integer.
 *
 * Return: binary.
 **/


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int size = 8 * sizeof(unsigned long int);

	if (index >= size)
	{
		return (-1);
	}

	i = i << index;

	if ((n & i) != 0)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
