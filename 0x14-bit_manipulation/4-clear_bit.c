#include "main.h"

/**
 * clear_bit - the value of a bit
 * @n: A pointer
 * @index: A bit cleared by an index
 *
 * Return: equevalent success and fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
