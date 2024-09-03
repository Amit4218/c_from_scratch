#include <stdio.h>
#include <math.h>

int main()
{
    /*

        here we will implement a program which will give us the hypotensuse of a right triangle. we will also use the 
        inbuild math function.

        for for getting the hypoteus of the triangle is : c = √(a² + b²)

        # NOTE if the file dint run use this command : gcc your_file_name.c -lm ( in this case: gcc hypotenuse_trangle.c -lm)

    */

   double a;
   double b;
   double c;

   printf("Enter side A: \n");
    scanf("%lf", &a);

    printf("Enter side B: \n");
    scanf("%lf", &b);

    // Calculate the hypotenuse
    c = sqrt(a * a + b * b);

    // Print the result
    printf("Side C (hypotenuse) is: %lf\n", c);


    return 0;
}
