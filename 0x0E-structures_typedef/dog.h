#ifndef DOG
#define DOG
/**
 * struct dog - Structure of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for dog
*/
typedef struct dog Dog;
void free_dog(Dog *d);
Dog *dog1(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
