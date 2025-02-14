#include "main.h"

/**
 *clear_bit -  function that sets the value of a bit to 0 at a given index
 *@n:pointer to number
 *@index: is the index, starting from 0 of the bit you want to set
 *Return:1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int *ptr;

	while (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	ptr = n;
	*ptr &= ~(1ul << index);
	return (1);
}


