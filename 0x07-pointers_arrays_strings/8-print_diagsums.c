#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
int l, w, sum1 = 0, sum2 = 0;

for (l = 0; l <= (size * size); l = l + size + 1)
sum1 = sum1 + a[l];

for (w = size - 1; w <= (size * size) - size; w = w + size - 1)
sum2 = sum2 + a[w];
printf("%d, %d\n", sum1, sum2);
}
