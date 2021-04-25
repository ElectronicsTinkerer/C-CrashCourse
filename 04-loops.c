
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Here is a for-loop:
    // for (variable intitalization; continue condition; variable modifiers)
    //
    // Note the variable declaration outside of the for construct
    // this is typically done for backwards compatibility (C89) or
    // for style reasons
    int i;
    for (i = 0; i < 5; i++)
        printf("For1: %d\n", i);
    
    // You can also declare your loop variable inside the for statment:
    for (int j = 5; j > 0; j--)
        printf("For2: %d\n", j);

    // In case you are curious, you can create an infinite loop as follows:
    // for (;;)
    // Since the test condition (in this case, blank) never tests false

    // While loops, however, do not let you declare a variable in their statement,
    // so the have to be declared outside of the loop (remember that i below is from above)
    while (i > 0)
    {
        // Also note the use of the {brackets} again. This is a compound statment
        printf("While: %d\n", i);

        // Don't forget to update your loop variables, otherwise you will have
        // an infinite loop (i've made too many of these :)
        i -= 1;
    }

    // Again, if you like infinite loops, you can create one like this:
    // while (1)
    // Since 1 is non-zero, it is treated as true

    // If you want to do something one time before testing a condition, then the
    // do-while loop is what you want:
    do
    {
        printf("Do-while: %d\n", i);
        i = i + 1;
    }
    while (i < 5); /* DO! */

    // Note that if you accidently delete the 'do' part of the do-while loop, the
    // code is still valid c, but will not execute the way you intended it to. For
    // this reason, some people do not like the use of do-while loops. (I personally
    // still use them, but mark the "while" part with the /* DO! */ marker to remind me)

    return EXIT_SUCCESS;
}