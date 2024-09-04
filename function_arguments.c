#include <stdio.h>

// Function declaration (prototype) with arguments
void hello(const char *name, int age);

int main(int argc, char const *argv[])
{
    /* 

        # Function Arguments

        Function arguments (or parameters) are used to pass information to functions.
        They allow functions to operate on different inputs and produce different outputs based on those inputs.

        # Syntax for function arguments:

        1. **Function Declaration**:
           When declaring a function, you specify the types and names of parameters it will take. For example:
           
           void hello(const char *name, int age);
           
           Here, `hello` is a function that takes two arguments:
           - `const char *name` (a pointer to a character array, i.e., a string)
           - `int age` (an integer value)
           
        2. **Function Definition**:
           In the function definition, you provide the implementation of the function using the parameters. For example:
           
           void hello(const char *name, int age) {
               printf("Hello %s!\n", name);
               printf("You are %d years old.\n", age);
           }
           
           This function prints a personalized greeting and age based on the arguments passed.
           
        3. **Function Call**:
           When calling the function, you pass the actual values (arguments) that match the parameter types defined. For example:
           
           hello("Alice", 30);
           
           This call will pass `"Alice"` as the `name` and `30` as the `age`.

        # Example:

        Here is how you can use function arguments in your program:
    
    */

   // Calling the function with arguments
   hello("Alice", 30);

    return 0;
}

// Function definition with arguments
void hello(const char *name, int age) {
    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
}
