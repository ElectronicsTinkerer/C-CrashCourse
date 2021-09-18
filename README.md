# C-CrashCourse
Crash-Course for c programming.

## Compiling
I am assuming that you have installed some sort of `c` compiler and your development environment is already setup. (If not, look at installing [mingw](http://mingw-w64.org) for windows. For Ubuntu, run: `sudo apt install build-essential` and for Arch: `sudo pacman -S gcc`)
To compile all the files in here, you can run: `gcc [filename.c]` and the compiled output will be stored in `a.out` or `a.exe` depending on your system. You can also specify the output filename with: `gcc [filename.c] -o [output-filename]`.

## files
### 01-hello-world.c
Goes over:
- Types of comments
- Basic library includes (`stdio.h` and `stdlib.h`)
- Basic `main()` function
- Printing a string to the terminal with `printf()`
- Demo of `printf()` with and without a newline
- Setting an exit status

### 02-variables.c
Goes over:
- Global variables
- Some variable types: `char`, `int`, and `double`
- Assigning a value to a variable
- Incrementing an integer (both pre- and post-incrementation)
- `printf()` format specifiers for `char`, `int`, and `double`

### 03-flow-control.c
Goes over:
- Local variables (briefly)
- A proper integer equality comparison (using `==`)
- Two incorrect equality comparisons (using `=`)
- Demonstration of 0 = false, (not 0) = true
- Types of comparisons (`>`, `>=`, `<`, `<=`, `==`, `!=`)
- `if` / `else if` / `else` structures
- Introduction to compound statements

### 04-loops.c
Goes over:
- Basic `for` loop syntax
- Ability to declare a loop variable before and as part of the for statement
- Backwards counting in a loop
- Infinite loops using `for(;;)` and `while(1)`
- `while` loops
- `do-while` loops
- Dangers of deleting the `do` of a `do-while` loop

### 05-switch-case.c
Goes over:
- Switch statement syntax
- Switch statements use `==` equality comparison
- Multiple cases for same section of code
- Default case

### 06-pointers.c
Goes over:
- Pointers and specifying their type
- Accessing pointer values and what they point at
- Intro to storing strings
- String format specifier for `printf()`

### 07-arguments-arrays.c
Goes over:
- Passing arguments to a c program
- Looping over elements in an array
- Creating a statically-sized array
- Basic array indexing

### 08-functions.c
Goes over:
- Function prototypes
- `void`-returning functions
- Functions with no arguments
- Functions specified with `void` argument
- Functions that take multiple parameters
- Basic return values
- Calling functions
- Function body declarations

### 09-structs.c
Goes over:
- Basic definition of a `struct`
- Use of a `typedef` type to create a variable
- Accessing data from within a struct
- Creating a pointer to a struct
- Accessing data contained in a struct from a pointer
- Dereferencing of pointers to get the data being pointed at

## To Do
Things I would like to add in the future:
- Dynamic memory allocation
- Variable-length parameters for functions
- Scoping
- Custom header files
- Preprocessor directives
- Primitive variable limits, size(of)s, overflows, casting
- Bitwise operators
- Add conditionals to `flow-control`
- Pointer arithmetic and casting
- Function pointers
- Multidimensional arrays (double pointers)
- Returning arrays
- `enum`s
- More in-depth strings
- `const`, `static`
- Nested structs, padding, unions, bitfields 
