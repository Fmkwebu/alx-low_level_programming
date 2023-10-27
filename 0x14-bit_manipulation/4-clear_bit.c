#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - The value of 0 is set
 * @n: set parameter
 * @index: bit index
 * Return: chances of success 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
