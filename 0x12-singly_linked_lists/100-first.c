#include <stdio.h>

/**
 * before_main - A function that prints a message before the main function
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
