#include "main.h"

/**
 * swap_int - swap two integer a and b
 * @a: pointer int will be updated
 * @b: pointer int will be updated
 * Return: void mean answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;
	 f = *a;
	*a = *b;
	*b = f;
}
