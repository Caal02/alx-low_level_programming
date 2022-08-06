#ifndef DOG_H
#define DOG_H

int _putchar(char c);
/**
  * struct dog - the structure has elements age,name & owner
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owenr of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
