/*
 * This is a block comment!
 *
 * 
 */

// This is a single-line comment

// Here's a quick c tutorial / reference:
// https://www.tutorialspoint.com/cprogramming/index.htm

// Include STanDard Input/Output
// Gives us things like character input/output and file access/operations
// Reference material: https://www.cplusplus.com/reference/cstdio/
//
// <> is used for library files, "" is used for user-headers
#include <stdio.h>

// Include the STanDard LIBrary
// Gives us things like string conversions, dynamic memory allocation,
// random numbers, basic sorting utilities, and some macros like EXIT_FAILURE and NULL
// Reference material: https://www.cplusplus.com/reference/cstdlib/
#include <stdlib.h>

// Main function, this is what is called when you
// compile your program
int main()
{
    // Call printf() - PRINT Formatted
    // This is used from stdio.h
    // Note the use of the semicolon; you need one at the end of each statement
    printf("Hello, world!");

    // Here is another printf, but this time ending in a newline:
    printf("It's me again!\n");

    return EXIT_SUCCESS;
}