#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: string that contains the binary number
 *
 * Return: the number converted
 */
unsigned int binary_to_uint(const char *b)
{
int o;
unsigned int dis_value = 0;

if (!b)
return (0);

for (o = 0; b[o]; o++)
{
if (b[o] < '0' || b[o] > '1')
return (0);
dis_value = 2 * dis_value + (b[o] - '0');
}

return (dis_value);
}
