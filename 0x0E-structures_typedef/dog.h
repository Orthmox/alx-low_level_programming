#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * @name: is the name of dog
 * @age: is the age of dog
 * @owner: is the owner of dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* ifndef DOG_H */
