#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct preferences {
const char *food;
float exercise_hours;
};

struct fish {
const char *name;
const char *species;
int teeth;
int age;

struct preferences care;
};

/* Print out the catalog entry */
void calalog(struct fish f)
{
printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

/* Print the label for the tank */
void label(struct fish f)
{
printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", f.name, f.species, f.teeth, f.age);
}

int main()
{
// struct fish snappy = {"Snappy", "Piranhan", 69, 4};
struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};
calalog(snappy);
label(snappy);

printf("Snappy likes to eat %s\n", snappy.care.food);
printf("Snappy likes to exercise for %f hours\n", snappy.care.exercise_hours);

return 0;
}