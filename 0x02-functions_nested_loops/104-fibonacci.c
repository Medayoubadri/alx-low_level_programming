#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int lukeFront = 0, lukeBack = 1, leiaFront = 0, leiaBack = 2;
	unsigned long int yodaTemp1, yodaTemp2, yodaTemp3;
	int jediCount;

	printf("%lu, %lu, ", lukeBack, leiaBack);
	for (jediCount = 2; jediCount < 98; jediCount++)
	{
		if (lukeBack + leiaBack > LARGEST || leiaFront > 0 || lukeFront > 0)
		{
			yodaTemp1 = (lukeBack + leiaBack) / LARGEST;
			yodaTemp2 = (lukeBack + leiaBack) % LARGEST;
			yodaTemp3 = lukeFront + leiaFront + yodaTemp1;
			lukeFront = leiaFront, leiaFront = yodaTemp3;
			lukeBack = leiaBack, leiaBack = yodaTemp2;
			printf("%lu%010lu", leiaFront, leiaBack);
		}
		else
		{
			yodaTemp2 = lukeBack + leiaBack;
			lukeBack = leiaBack, leiaBack = yodaTemp2;
			printf("%lu", leiaBack);
		}
		if (jediCount != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

