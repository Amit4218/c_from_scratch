#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
   /*
        // while loops = repeats a section of code possibly unlimited times.
        // while some condition remains true.
        // a while loop might not execute at all.

        // ---------- SYNTAX -------------//

        while (*condition)
        {
            something to do after that.
            example . printf("Hello, World");
        }

        // -------------------------------//
    
        // Here we will create a function where it will ask for user name until the user types it name.

    */

    char name [25];

    printf("Enter your name: ");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

   while (strlen(name) == 0)
   {
     printf("You did not enter your name!");
     printf("Enter your name: ");
     fgets(name,25,stdin);
     name[strlen(name)-1] = '\0';

   }

    printf("Hello %s\n",name);


    return 0;
}
