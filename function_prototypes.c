#include<stdio.h>

void hello(char name [], int age); // function prototype


int main(int argc, char const *argv[])
{
    /*
    
        // function prototype

        // What is it?
        // Function declaration, w/o  a body before main()
        // Ensures that call to a function are made with the correct arguments


        // IMPORTANT NOTES
        // Many c complier do no check for parameter matching
        // Missing arguments will result in unexpected error
        // A function prototype causes the complier to flag an error if arguments are missing.

        // ADVANTAGES
        // Easier to navigate a program w/ main() at top
        // helps with debugging 
        // commomly used in header files
    
    */

   char name [] = "amit";
   int age = 19;

   hello(name,age); // calling the function and passing the parameters


    return 0;
}

void hello(char name [], int age){

    printf("your name is %s \n",name);
    printf("You are %d years old\n",age);

}