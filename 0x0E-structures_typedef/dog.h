#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: Defines a meta data for the dog.
 */

struct dog
{
    char* name;
    float age;
    char* owner;
};
#endif