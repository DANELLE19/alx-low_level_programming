#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines if a number is positive, negative or zero
 * Return: 0(success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() % 100 + 1; |  Generates a random number between 1 and 100
if (n > 0)
{
printf(" %d is positive\n", n);
}
else if (n == 0)
{
printf(" %d is zero\n", n);
}
else
{
printf(" %d is negative\n", n);
}
return (0);
}
