#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure for an object called dog
 * @name: Element for name
 * @age: Element for age
 * @owner: Element for owner
 * **/
struct dog
{
char *name;
float age;
char *owner;
/*
 */
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
