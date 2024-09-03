#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
    # To get user input in c we use the "scanf()" function.
    
    inside the scanf() function we declare the format specifer and where we want to store the input in.

    */

   // --------- EXAMPLE -----------

   int age;

   printf("whats your age?\n");
   scanf("%d",&age); 
   printf("you are %d years old\n",age);
   
   // here we declare the format specifer ( in this case %d for int) and the variable we want to store the value in.
   // # not while specifying the variable for input you have to use & and the variable name ( in this case &age) to store the input.

   // you can also do this with string 

    char name[25]; // 25 defines max number of character of that can pe inputed.

    printf("Whats your name?\n");
    scanf("%s", name);
    printf("hi %s\n",name);

    // Note you don't have to use & when using an arr.
    // you can take string input like this but if the user types their full name with a whitespace with it.
    // example : Amit bhagat : it will only take the input before the whitespace ( in this case only 'Amit' will be printed )



    // TO TAKE FULL USER INPUT 

    // WE can use the "fgets()" fuction it will take the whole input for us.

    // --------------- EXAMPLE -----------------

    char full_name[25];

    printf("Enter full name\n");
    fgets(full_name, 25, stdin); 
    printf("hello %s",full_name);

    // in the fgets() function first we pass the variable name(full_name), the maximum char allowed(25), and a built in keyword (stdin) which stands
    // for standered input.

    // make sure you comment the upper code before try this code.



    return 0;
}
