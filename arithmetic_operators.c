#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    // Arithmetic_operators

    /*

        + (addition)

        - (Subtraction)

        * (Multiply)

        / (Division)

        % (Modules  *To get the remainder)

        ++ (increment *basically means +1 : more in augmented_operators file) 

        -- (decrement * basically means -1 : more in augmented_operators file )

    */



   int x = 5;

   int y = 5;

   int results_add = x + y;

   printf("add:%d\n",results_add);

   int result_sub = x - y;

   printf("sub:%d\n",result_sub);

   int results_multiply = x * y;

   printf("multiply:%d\n",results_multiply);

   float results_division = x / y;

   printf("dividion:%2.f\n",results_division);

   float results_modules = x % y;

   printf("modules:%2.f\n",results_modules);





    return 0;
}
