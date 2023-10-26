#include "main.h"

/**
 * flip_bits - checks the number of bits
 * stort from one going upwards
 * @n: number starts here
 * @m: number ends here
 * Return: change the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, rounder = 0;
	unsigned long int previous;
	unsigned long int ex = n ^ m;

	for (k = 63; k >= 0; k--)
	{
	previous = ex >> k;
	if (previous & 1)
	rounder++;
	}
	return (rounder);
}
