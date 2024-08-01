#include <stdio.h>

/**
 * tortoise_and_hare - Prints a message before the main function is executed.
 *
 * Description: Slow and steady wins the race... and prints before main.
 */
void __attribute__((constructor)) tortoise_and_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

