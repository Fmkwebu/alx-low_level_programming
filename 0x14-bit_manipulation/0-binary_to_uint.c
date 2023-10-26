#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint
 * @b: A string comprise of binary numbers
 * Return: converted number of 0
 */

unsigned int binary_to_uint(const char *b)
{
	int zip;
	unsigned int mello = 0;

	if (!b)
	return (0);
	for (zip = 0; b[zip]; zip++)
	{
	if (b[alx] < '0' || b[alx] > '1')
	return (0);
	mello = 2 * mello + (b[alx] - '0');
	}
	return (mello);
}
