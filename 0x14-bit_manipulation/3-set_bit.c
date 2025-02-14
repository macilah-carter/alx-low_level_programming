#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *ptr;

	ptr = n;

	while (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*ptr |= (1ul << index);
	return (1);
}
