#include "main.h"

/**
 * reset_to_98 - update value of pointer
 * @n: parameter
 * return: returns 0
 */

void reset_to_98(int *n)
{
	int i;
	*n = &i;

	*n = 98;
}
