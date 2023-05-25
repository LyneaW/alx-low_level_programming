#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of paramters
 * @...: variable number of paramters to calculate the sum of
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int t, sum = 0;

va_start(ap, n);

for (t = 0; t < n; t++)
sum += va_arg(ap, int);

va_end(ap);

return (sum);
}
