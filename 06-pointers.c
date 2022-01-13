
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // This is a normal integer variable
    int i = 15;

    // This creates a pointer to that integer.
    // Note the use of the * (dereference) operator.
    int *ptr;

    // What can we do with a pointer?
    // We can set ptr to point to the int:
    ptr = &i;

    // The & above is the "address-of" operator and returns
    // (you guessed it) the address of its right-hand-side operand

    // Lets print the values that we have:
    printf("i = %d, ptr = %d\n", i, ptr);

    // What happened? i looks fine, but ptr does not have the right
    // value! - This is because we printed out the address that ptr 
    // stores. To get the value at that address, we need to dereference
    // the pointer:
    printf("i = %d, *ptr = %d\n", i, *ptr);

    // In case you are wondering, poointers are super useful later on.

    // Here is one more basic example, allowing us to access strings:
    char *my_string = "Hello, world! Pointers are fun!\n";

    // This allows us to try out one more format specifier for printf:
    printf("My string: %s My string's first character: %c\n", my_string, *my_string);

    // Here is some basic pointer arithmetic where we add an offset to the
    // address stored by the pointer before accessing the value
    // at that address:
    printf("My string's second character: %c\n", *(my_string + 1));

    // Additionally, since strings are just arrays of type char, they
    // can be indexed into just like arrays (we will see more of this
    // in the arrays file)
    printf("My string's second and fifth characters: %c, %c\n", my_string[1], my_string[4]);

    return EXIT_SUCCESS;
}