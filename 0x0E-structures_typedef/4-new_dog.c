#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
    int nameLen, ownerLen, i;

    dog_t* new_dog;
    new_dog = malloc(sizeof(dog_t));

    if(new_dog == NULL)
        return NULL;

    nameLen = ownerLen = 0;
    //calculate the length of the name
    while(name[nameLen++]);
    //calculate the length of the owner
    while(owner[ownerLen++]);

    new_dog->name = malloc(nameLen * sizeof(new_dog->name));
    if(new_dog == NULL)
        return NULL;

    for(i = 0; i < nameLen; i++)
        new_dog->name[i] = name[i];

    new_dog->age = age;

    new_dog->owner = malloc(ownerLen * sizeof(new_dog->owner));
    if(new_dog == NULL)
        return NULL;

    for(i = 0; i < ownerLen; i++)
        new_dog->owner[i] = owner[i];

    return new_dog;
}