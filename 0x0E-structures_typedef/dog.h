#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog data type
 * @name: name of dog
 * @age: age of dog
 * @owner: string owner of dog
 *
 * Description: This structure will help me get all the properties
 * of a dog in one identifier.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
