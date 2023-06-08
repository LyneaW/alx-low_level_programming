#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (big), 1 (little)
 */
int get_endianness(void)
{
unsigned int o = 1;
char *c = (char *) &o;

return (*c);
}
