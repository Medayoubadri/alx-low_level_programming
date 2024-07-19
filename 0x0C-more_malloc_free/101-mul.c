#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_str - checks if a string is composed of digits no letters allowed
 * @str: is the string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise obviously..
 * Note: This function is very strict, no funny business with letters!
 */
int is_digit_str(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0); /* YOU SHALL NOT PAAASSS... */
		str++;
	}
	return (1);
}

/**
 * mul - multiplies two numbers represented as strings
 * @num1: the first number (the multiplier)
 * @num2: the second number (the multiplicand)
 *
 * Return: pointer to the result as a string
 * Note: Turning numbers into strings and back again, because why not?
 */
char *mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry, n1, n2, sum;
	char *result, *final_result;

	while (num1[len1])
		len1++; /* sheepOne, sheepTwo, sheepThre, sheepFo.., shee.. yawn */
	while (num2[len2])
		len2++; /* Counting again... */

	result = calloc(len1 + len2 + 1, sizeof(char));
	if (result == NULL)
		return (NULL); /* Memory allocation failed, you can destory your pc now!!! */

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0; /* Reset the carry for each new digit in num1 */
		n1 = num1[i] - '0'; /* *'#~.. abracadabra, converting char to digits */
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0'; /* More magic with characters and digits */
			sum = n1 * n2 + result[i + j + 1] + carry; /* Summing up, carry included */
			carry = sum / 10; /* Calculating the new carry */
			result[i + j + 1] = sum % 10; /* Storing the result digit */
		}
		/* If you repeat carry in the dark 3 times she'll come.. */
		result[i + j + 1] += carry;
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] += '0'; /* Converting # back to char.. again? sigh */

	i = 0;
	while (result[i] == '0' && result[i + 1] != '\0')
		i++; /* skip leading zeros, because they are boring.. */

	final_result = strdup(result + 1);
	free(result);

	return (final_result); /* here is you result, all shiny and new! */
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments (this better be 3, or else)
 * @argv: the arguments (the program name, num and numer)
 *
 * Return: 0 if successful, 98 otherwise
 * Note: This program only understands the language of digits!
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit_str(argv[1]) || !is_digit_str(argv[2]))
	{
		printf("Error\n"); /* Oops, You messd up the arguments! */
		return (98); /* exit with status 98, because they said so... */
	}

	result = mul(argv[1], argv[2]);
	if (result == NULL)
	{
		printf("Error\n"); /* oups something went terribly wrong!*/
		return (98); /* again 98, because it's the magical number of errors*/
	}

	printf("%s\n", result); /* here's your multiplication result!*/
	free(result); /* Poty training is all about freeing the memory*/
	return (0); /* all done, time to die peacefully */
}

