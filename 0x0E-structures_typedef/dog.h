#ifndef DOG_H
#define DOG_H
/*
* struct dog - type describing a dog
* @name: First member
* @age: Second member
* @owner: Third member
*
*Longer description: name, age and owner of the dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for struct dog
*/

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


endif
