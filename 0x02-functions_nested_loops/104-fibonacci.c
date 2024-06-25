#include <stdio.h>

#define LARGEST 10000000000

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
unsigned long fib1_high, fib1_low, fib2_high, fib2_low;
unsigned long high, low;
int count;

printf("%lu, %lu", fib1, fib2);

for (count = 2; count < 92; count++)
{
	unsigned long next = fib1 + fib2;
	printf(", %lu", next);
	fib1 = fib2;
	fib2 = next;
}

fib1_high = fib1 / LARGEST;
fib1_low = fib1 % LARGEST;
fib2_high = fib2 / LARGEST;
fib2_low = fib2 % LARGEST;

for (count = 92; count < 98; count++)
{
	high = fib1_high + fib2_high;
	low = fib1_low + fib2_low;

	if (fib1_low + fib2_low >= LARGEST)
	{
		high += 1;
		low -= LARGEST;
	}
	printf(", %lu%010lu", high, low);
	fib1_high = fib2_high;
	fib1_low = fib2_low;
	fib2_high = high;
	fib2_low = low;
}
printf("\n");
return (0);
}

