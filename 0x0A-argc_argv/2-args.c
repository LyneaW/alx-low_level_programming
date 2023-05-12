#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int k;

for (k = 0; k < argc; k++)
{
printf("%s\n", argv[k]);
}

return (0);
}
