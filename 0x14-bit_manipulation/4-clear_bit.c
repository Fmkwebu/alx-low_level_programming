#include "main.h"


/**

 * clear_bit - the value of abit to be set to a given bit to 0

 * @n: A pointer that/to change the number to

 * @index: An index that clears a bit

 *

 * Return: 1 just success, -1 fail

 */

int clear_bit(unsigned long int *n, unsigned int index)

{

        if (index > 63)

                return (-1);

        *n = (~(1UL << index) & *n);

        return (1);

}

===============5-flip_bits.c===============

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
