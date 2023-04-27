#include "lists.h"

/**
 * first - my proto
 *
 * Description: it aplys the constructor attribute to the first()
 * so that it is executed before main()
 */
void first(void) __attribute__ ((constructor));

/**
 * first - the entryb point
 *
 * Description: prints a sentence before the main function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
