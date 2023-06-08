/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int o, add = 0;
unsigned long int new;
unsigned long int exclude = n ^ m;

for (o = 63; o >= 0; o--)
{
new = exclude >> o;
if (new & 1)
add++;
}

return (add);
}
