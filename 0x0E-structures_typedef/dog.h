#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Description: the attributes of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Tydedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif