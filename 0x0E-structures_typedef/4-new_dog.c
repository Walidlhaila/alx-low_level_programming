#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: pointer to the new dog, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog;
    char *name_copy, *owner_copy;
    int name_length, owner_length;

    /* Calculate the lengths of the name and owner strings */
    name_length = strlen(name);
    owner_length = strlen(owner);

    /* Allocate memory for the new dog struct */
    new_dog = malloc(sizeof(dog_t));
    if (new_dog == NULL)
        return (NULL);

    /* Allocate memory for the name and owner strings */
    name_copy = malloc((name_length + 1) * sizeof(char));
    if (name_copy == NULL)
    {
        free(new_dog);
        return (NULL);
    }

    owner_copy = malloc((owner_length + 1) * sizeof(char));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog);
        return (NULL);
    }

    /* Copy the name and owner strings */
    strcpy(name_copy, name);
    strcpy(owner_copy, owner);

    /* Set the new dog's name, age, and owner */
    new_dog->name = name_copy;
    new_dog->age = age;
    new_dog->owner = owner_copy;

    return (new_dog);
}
