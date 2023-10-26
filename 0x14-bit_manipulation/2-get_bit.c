#include "main.h"

/**
 * get_bit - it takes the value of a bit
 * @n: search for integers
 * @index: numbers of bit
 * Return: The value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value of_bit;

	if (index > 63)
	return (-1);
	amonut_of_bit_values = (n >> index) & 1;
	return (amonut_of_bit_values);
}
