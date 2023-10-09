#include <stdlib.h>
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog
* @d: Pointer to struct dog to initialize
* @name: Name to initialize
* @age: Age to initialize
* @owner: Owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return; /* Do nothing if the pointer is NULL */

d->name = name;
d->age = age;
d->owner = owner;
}

