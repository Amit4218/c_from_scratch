#include<stdio.h>
#include<string.h>

// ---------- Example ------- //

struct player

{
    char name[15];
    int age;
};


int main(int argc, char const *argv[])
{
    /*
    
        Struct = collection of related member("variables")
                they can be of different data types
                listed under one name in ablock of memory
                VERY SIMILAR to classes in other languages (but no methods)

    */

   struct player user;

   strcpy(user.name, "amit"); // use " . " to acces the variable inside the struct 
   user.age = 19;
 
    printf("%s",user.name);
    printf("%d",user.age);

    return 0;
}
