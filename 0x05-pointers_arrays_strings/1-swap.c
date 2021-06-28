#include "holberton.h"

/**
 * swap_int - swap the value of two integers a and b
 * @a: integer value to be assign for b and
 * @b: integer value to be assign for a
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

