#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a new line
 * @array: array
 * @size: number of elem to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int l;

if (array == NULL || action == NULL)
return;

for (l = 0; l < size; l++)
{
action(array[l]);
}
}
