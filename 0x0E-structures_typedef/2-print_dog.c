#include "dog.h"
/**
 * print_dog - a function that prints a struct dog
 * @d: a pointer to the struct dog to print
 *
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "(nil)";
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
