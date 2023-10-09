#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: First member
* @age: Second member
* @owner: Third member
*
* Description: This structure represents basic information about a dog.
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

/**
* _strcpy - copy a string from source to destination
* @dest: destination string
* @src: source string
*
* Return: pointer to the destination string
*/
char *_strcpy(char *dest, char *src);

/**
* _strlen - calculate the length of a string
* @s: input string
*
* Return: length of the string
*/
int _strlen(char *s);

#endif

