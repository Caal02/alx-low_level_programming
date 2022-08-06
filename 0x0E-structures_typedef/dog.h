#ifndef DOG_H
#define DOG_H

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/**
  * struct dog - the structure has elements age,name & owner
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owenr of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} Dog;

#endif
