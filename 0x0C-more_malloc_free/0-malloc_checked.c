#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory number
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *t;
t = malloc(b);
if (t == NULL)
exit(98);

return (t);
}
