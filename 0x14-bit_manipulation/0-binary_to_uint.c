#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: string
 *
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
int p;
unsigned int dis_value = 0;

if (!b)
return (0);

for (p = 0; b[p]; p++)
{
if (b[p] < '0' || b[p] > '1')
return (0);
dis_value = 2 * dis_value + (b[p] - '0');
}

return (dis_value);
}
