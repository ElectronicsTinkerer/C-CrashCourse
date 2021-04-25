
#include <stdio.h>
#include <stdlib.h>


// If you want to use arguments in your program, main takes two arguments:
// The first is of type int and indicates the number of arguments that were
// passed to the program. The second is an array of strings, which are each
// argument passed to the program.
int main(int argc, char *argv[])
{

    // Here, we will print out all the arguments that were passed to our program:
    for (int i = 0; i < argc; i++)
    {
        printf("Argument #%d: %s\n", i, argv[i]);
    }

    // Did you see the array syntax above? The function signature creates an array
    // of pointers of type char (an array of strings). Then we indexed into that
    // array to get the strings (values) stored in it. Here is one more example:

    // Create an array of 10 ints:
    int my_ints[10];

    // Fill those locations with some numbers:
    for (int i = 10; i > 0; i--)
    {
        my_ints[i-1] = i;   // i-1 is the index in the array that we are accessing
    }

    // Now print those out
    for (int i = 0; i < 10; i++)
    {
        printf("my_ints[%d] = %d\n", i, my_ints[i]);
    }

    return EXIT_SUCCESS;
}