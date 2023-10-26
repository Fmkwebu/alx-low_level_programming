#include "main.h"

/**
 * set_bit - bit is set by an index
 * @n: there is a pointer
 * @index: An index that set a bit
 * Return: 1  success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
