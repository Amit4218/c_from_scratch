#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
        // while loop = checks a condition, THEN executes a block of code if condition is true.

        // do while loop = always executes a block of code once, Then checks a condition.

        // ------- SYNTAX ------------ //

        do {
        
            // code

        }
        while(condition);

        //----------------------------//

        NOTE: A do while loop will work atleast once.

        // Here we will create a function which asks a user for number which is > 0 and sum it up.


     */


        int number = 0;

        int sum = 0;

        do
        {
            
            printf("Enter a # above 0: \n");
            scanf("%d", &number);
            
            if (number > 0)
            {
                sum += number; // sum = sum + number
            }
            


        } while (number > 0);

        printf("%d\n",sum);
        


    return 0;
}
