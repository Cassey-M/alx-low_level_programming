#include "lists.h"

/**
 * pre_main - Prints "You're beat! and yet, you must allow,"
 *             followed by "I bore my house upon my back!".
 */
void __attribute__((constructor)) pre_main()
{
	_putchar("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

int main(void)
{
	/* Your main function code here */
	return 0;
}
