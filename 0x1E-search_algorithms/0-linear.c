#include "search_algos.h"

/**
* linear_search - searches for value in an array
* @array: pointer to the first element in the array
* @size: size of the array
* @value: value to search for
* Return: first index of value
*/

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array)
{
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return ((int)i);
}
}
}
return (-1);
}
