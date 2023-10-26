#include "main.h"

/**
 * print_binary - is equal to the decimal number
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	int Fiks, Fiks = 0;
	unsigned long int new;

	for (Fiks = 63; Fiks >= 0; Fiks--)
	{
	new = n >> Fiks;
	if (new & 1)
	{
	_putchar('1');
	mello++;
	}
	else if (new)
	_putchar('0');
	}
	if (!new)
	_putchar('0');
}
