
#include <stdio.h>
#include <stdlib.h>

// This is a struct (structure), it can be used to store multiple data items associated
// with a particular "object" (although there are no real objects in c)
typedef struct 
{
    char *name;     // Pointer of type character (a string)
    int age;        // A number
} Person;


int main()
{
    // Creates a struct of type Person
    Person my_person;

    // To access the fields of a struct, use the '.' operator
    my_person.name = "Bob";
    my_person.age = 20;

    // We can read using the same operator:
    printf("Name: %s, age: %d\n", my_person.name, my_person.age);

    // Now, let's create a pointer to a person:
    Person *ptr_person;

    // And set that pointer to reference the person we made earlier
    ptr_person = &my_person;

    // Let's access its data:
    // We need to use the "->" to access the struct's members since
    // the variable ptr_person is a pointer to the struct storing the data
    printf("Name: %s, age: %d\n", ptr_person->name, ptr_person->age);

    // Here, we can use the "." operator since we are dereferencing the
    // pointer before trying to access the struct's members. By dereferencing
    // the pointer, we can directly access the data in the struct
    printf("Name: %s, age: %d\n", (*ptr_person).name, (*ptr_person).age);

    return EXIT_SUCCESS;
}