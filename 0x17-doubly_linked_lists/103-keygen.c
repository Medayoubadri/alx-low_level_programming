#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASS_LENGTH 6
#define ENCODING_BASE "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk"

/**
* generate_key - Generates a key based on username
* @username: Input username
* @key: Output key buffer
*
* Return: void
*/
void generate_key(const char *username, char *key)
{
	int username_length = strlen(username);
	int i, accumulator;
	unsigned char max_char;

	key[0] = ENCODING_BASE[(username_length ^ 59) & 63];

	accumulator = 0;
	for (i = 0; i < username_length; i++)
		accumulator += username[i];
	key[1] = ENCODING_BASE[(accumulator ^ 79) & 63];

	accumulator = 1;
	for (i = 0; i < username_length; i++)
		accumulator *= username[i];
	key[2] = ENCODING_BASE[(accumulator ^ 85) & 63];

	max_char = username[0];
	for (i = 0; i < username_length; i++)
		if (username[i] > max_char)
			max_char = username[i];
	srand(max_char ^ 14);
	key[3] = ENCODING_BASE[rand() & 63];

	accumulator = 0;
	for (i = 0; i < username_length; i++)
		accumulator += (username[i] * username[i]);
	key[4] = ENCODING_BASE[(accumulator ^ 239) & 63];

	for (i = 0; i < username[0]; i++)
		accumulator = rand();
	key[5] = ENCODING_BASE[(accumulator ^ 229) & 63];

	key[PASS_LENGTH] = '\0';
}

/**
* main - Entry point, generates key based on username
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	char key[PASS_LENGTH + 1];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", argv[0]);
		return (1);
	}

	generate_key(argv[1], key);
	printf("%s", key);

	return (0);
}
