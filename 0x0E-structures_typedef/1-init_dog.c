#include "dog.h"
/**
 * init_dog - func name
 * @d: the dog struct
 * @name: param 1
 * @age: param 2
 * @owner: dog owner
 * Return: no value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
