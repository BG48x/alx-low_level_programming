#include <stdio.h>
#include "<stdlib.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->namem = "(nil)";
	if (d->owner == NULL)
		d->owner = ("nil)";

				printf("NAME: %s\nAge: %f\nowners: %s\n", d->name, d->age, d->owner);
				}
