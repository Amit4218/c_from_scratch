#include<stdio.h>

void hello(); // Function declaration (prototype) // letting the compiler know about the function 
                // writing function before the main function is a better practice.
                // more about prototype in the function_prototype file.


int main(int argc, char const *argv[])
{
    /* 

        # Note * There is more about function in the funnction_arguments file.


        function = Functions are a fundamental concept in C programming that allow you to group code into reusable blocks.
                   Functions help make your code more modular, organized, and easier to manage.

        # To create a function first you write void & give it a name and end it with( parenthesis "()" ),
         and  with ( curly-braces "{}" ). 
        
        # void is a inbuild function / keyword in c.

         Example : 
         
         void hello(){

}
            // your code goes here

         } 

         // To call a function you write the name of the function.

         Example : hello()
    
    */

   // calling the function 

   hello();


    return 0;
}


// ------------- Example ------------------

void hello(){

    printf("hello this is hello function!\n");
    printf("welcome to c programming!\n");

}

// ------------------------------------------