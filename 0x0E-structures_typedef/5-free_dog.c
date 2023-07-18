#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for a dog.
 * @d: pointer to the dog to be freed.
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    /* Free the memory for the name and owner strings */
    free(d->name);
    free(d->owner);

    /* Free the memory for the dog struct */
    free(d);
}
