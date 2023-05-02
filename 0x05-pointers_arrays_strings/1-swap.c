#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: swaps and stores the address of b
 * @b: swaps and stores the address of a
 * Returb: Always 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
