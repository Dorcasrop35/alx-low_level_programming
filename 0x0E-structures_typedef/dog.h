#ifndef DOG_H
#define DOG_H

/**
 * struct Dog - A structure representing information about a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 * This structure defines attributes for storing information about a dog,
 * including its name, age, and owner.
 */
struct Dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct Dog.
 */
typedef struct Dog dog_t;

#endif /* DOG_H */






