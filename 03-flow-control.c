#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Probably should have put this in the previous file, but here is
    // a local variable. It is only available within the main() function.
    int my_int = 2;

    // Here is our first if statement, note the use of the double '=='
    // to check for equality. If you used a single '=' then you would
    // the right hand side's value (in this case, 2) to the the variable
    // my_int and the comparison would not give a correct result!
    if (my_int == 2)
        printf("my_int == 2\n");

    // Here is NOT HOW TO COMPARE FOR EQUALITY:
    if (my_int = 5)
        printf("my_int =  5: %d\n", my_int);
    
    // Again, how NOT TO COMPARE, but with an interesting result:
    if (my_int = 0)
        printf("my_int =  0: %d\n", my_int);

    // Did you notice how the above if statement did not run its printf()?
    // This is because in c, a value of 0 is false, while a non-zero
    // value is true. This is good to know since c does not have built-in
    // true/false keywords. (Generally, 1/0 are use to represent these)

    // Here is a summary of the various comparisons:
    // >  - greater than
    // >= - greater than or equal to
    // <  - less than
    // <= - less than or equal to
    // == - equal to
    // != - not equal to

    // Finally, you can do if / else if / else combinations:
    // Below is a program structure utilising all three. Note the use
    // of {braces} after the first if statment; this is how a 
    // compound statement is created. It allows for the combining of
    // more than one statment.
    if (my_int == 0)
    {
        printf("my_int == 0\n");
        printf("Another statement!\n");
    }
    else if (my_int == 1)
        printf("You should not see this message.\n");
    else
        printf("Nor should you see this one!\n");

    return EXIT_SUCCESS;
}