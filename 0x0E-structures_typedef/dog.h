#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dowg.
 * @age: The age of the dawg.
 * @owner: The dog of the owner.
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
