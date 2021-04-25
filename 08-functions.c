
#include <stdio.h>
#include <stdlib.h>

// Function prototypes:
// These tell the compiler that these functions exist so that it can compile your source
void my_func_empty();       // The compiler will not complain if you call with with arguments
void my_func_void(void);    // Cannot be called with arguments
int add_nums(int, int);     // Takes two ints and returns an int

// NOTE: Functions are pass by value, so instead of passing a pointer to data, the actual
// data is sent to and from the function. This means that it often makes sense to pass
// pointers to things like structs (we'll get to these later) instead of passing the struct
// itself.

int main()
{
    // Since my_func_empty did not specify any argumments, we can call it with 0 or more arguments:
    my_func_empty();
    my_func_empty("Hello", "hi", 5);

    // my_func_void specified a void argument, so we cannot pass arguments to it:
    my_func_void();
    // my_func_void(4); // Compiler error

    int i = add_nums(3, 2);

    printf("i = %d\n", i);

    return EXIT_SUCCESS;
}

void my_func_empty()
{
    printf("Hello, I take no arguments but can accept many!\n");
}

void my_func_void(void)
{
    printf("Hello, I take no arguments!\n");
}

int add_nums(int a, int b)
{
    return a + b;
}