#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
        for loop = repeat a section of code a limited amount of times.

        a for loop usually has a  counter index , a condition , and a incrementer or decrementer.

        ----------SYNTAX------------

        for (*a count or index*; *condition*; *increment or decriment*)
        {
            anything wanna do after like printing something.
        }
    
        ----------------------------
     */

    // --------------- Example ----------------------------

    // example for when you are increamenting 
    // you can also write i+=2 and so on, it will just add the number 2 instead of 1, if u write i+=3 it will add 3

    for (int i = 0; i <=10 ; i++)
    {
        printf("hello\n");
    }

    
    
    // this code will loop until its matches the condition.

    // example for when you are decrementing 
    // you can also write i-=2 and so on, it will just subtract the number 2 instead of 1, if u write i-=3 it will subract 3

    for (int i = 10; i >= 0; i--)
    {
        printf("world\n");
    }
    


    return 0;
}
