
#include <stdio.h>
#include <stdlib.h>

// Global variables
// Usually only use globals if your project is small (1ish files)
// These are available to all functions and scopes (we'll get to 
// those later) contained in this file. (If this file is included
// by another file, then these globals become available to them
// as well)
char my_char;

// You can also define the value of a global
int my_int = 10;

// And floats:
double my_double = 1.5;

int main()
{
    // Set my_char to something:
    my_char = 'C';  // Quick note: my_char is the lvalue and 'C' is the rvalue of this expression

    // Lets print out my_char to the terminal
    // Note the use of the format specifier '%c' - this indicates a character should be printed
    printf("My Char: %c\n", my_char);

    // Here is a format specifier for an integer:
    printf("My Int: %d\n", my_int);

    // Lets add 1 to my_int:
    my_int = my_int + 1;
    printf("My Int +1: %d\n", my_int);

    // You can also use +=, -=, *=, /= for operations like this
    // The above operation can be simplified to:
    my_int += 1;
    printf("My Int +1 again: %d\n", my_int);

    // Some more increment operators
    printf("My Int with a preincrement: %d, %d\n", ++my_int, my_int);
    printf("My Int with a postincrement: %d, %d\n", my_int++, my_int);

    // One more format specifier: %f for float or double
    printf("Here is a float: %f\n", my_double);

    // Finally, you can have as many format specifiers as you want in a printf():
    printf("Here is a float %f, Here is a character: %c, And here is a int: %d\n", my_double, my_char, my_int);

    return EXIT_SUCCESS;
}