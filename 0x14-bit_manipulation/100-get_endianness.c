#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: endiannes
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
