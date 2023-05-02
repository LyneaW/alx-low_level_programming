#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: Always 0 on success
 */
int main(void)
{
int pass[100];
int l, sum, w;

sum = 0;

srand(time(NULL));

for (l = 0; l < 100; l++)
{
pass[l] = rand() % 78;
sum += (pass[l] + '0');
putchar(pass[l] + '0');
if ((2772 - sum) -'0' < 78)
{
w = 2772 - sum - '0';
sum += w;
putchar(w + '0');
break;
}
}
return (0);
}
