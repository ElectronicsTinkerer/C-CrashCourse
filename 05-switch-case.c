
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Switch statements can be used for a lot of things, but an important
    // thing to keep in mind is that they use a '==' comparison for cases.
    // This will be important to keep in mind when we get to pointers and 
    // structs. (e.g. you can not compare strings with a switch statement)

    // Here is another loop, not needed for a switch statement, but good 
    // for the example
    for (int i = 0; i < 5; i = i + 1)
    {
        // Here is the switch statment, it checks the value of i:
        switch (i)
        {
            // The cases in a switch statment do not need to be in numerical
            // order, but it is generally good practice to keep them in order.
            case 2:
                printf("i=%d: Found a 2!\n", i);
                break;
            case 0:
                printf("i=%d: Found a 0!\n", i);
                break;
            // You can use multiple cases for a single group of statments:
            case 3:
            case 1:
                printf("i=%d: Found a 1 or a 3!\n", i);
                break;
            // The default case is executed if none of the other cases execute
            default:
                printf("i=%d: Default case detected!\n", i);
                break;
        }
    }

    return EXIT_SUCCESS;
}