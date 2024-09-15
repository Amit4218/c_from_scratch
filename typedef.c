#include<stdio.h>


// using type def with struct

 typedef struct {

char user[25];
char password[12];
int age;

} user; // using typedef NOTE: when using typedef with struct 
        // the nickname will come after the curlybraces and before the semicolon 
 


int main(int argc, char const *argv[])
{
    /* 
    
        typedef = is a reserved keyword that gives an exexting datatype a "nickname".

        for example you want to create a array named user. normally you will write

        // ----------- Example -------------//

        char user [15] = "amit";

        // but with type def you can just define a 

        typedef char user[15] ;

        // and when you need it you can just type 

        user = "name" // and you will get a array of user

        //-----------------------------------------------//

        // you can also use type def with struct

     */

    user user1 = {"amit", "password1",69};

    user user2 = {"ankit", "password2",69};

    printf("name %s\n",user1.user);
    printf("pass %s\n",user1.password);
    printf("age %d\n",user1.age);

    printf("\n");


    printf("name %s\n",user2.user);
    printf("pass %s\n",user2.password);
    printf("age %d\n",user2.age);
    




    return 0;
}
