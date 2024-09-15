#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(int argc, char const *argv[])
{
    /* 
    
        pseudo random number = a set of value or elements that are statiscally random.

        // to generate random number we will use some inbuild function

        // we will also have to include the time.h and stdlib.h heder files.

       // well will need use srand() 
       // to generate a random seed 
       // if we dont use this we will get the same number continously.

       // we will aslo use rand() 
       // to generate random number
    
     */

    srand(time(0)); // generating a random seed 

    int number = (rand() % 10) + 1 ;

    // here the rand() will give us a random num between aprox 37,000 number (depends on the datatype) the reason we are  % 10) + 1 is to limit the num.
    // now it should give us the random number between 1 to 10.

    printf("%d",number);

    return 0;
}
