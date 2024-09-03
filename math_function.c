#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /*

    There are a number of inbuild math function in c. To use those function first 

    you need to import a library called (math.h). To include a library in c you can write

    #include<name_of_the_lib> (in this case math.h)   

    */

   // ------------ EXAMPLE ------------- 

   double a = sqrt(9); // give us the square root of the number

   double b = pow(2,4); // give us the power of the number

   int c = round(3.14); // rounds the number 

   int d = ceil(3.14); // rounds up the number

   int e = floor(3.99); // rounds down the number

   double f = fabs(-100); // turns the number in positive number

   double g = log(3); // give us the log of 3

   double h = sin(45); 

   double i = cos(45);

   double j = tan(45);

   printf("square root: %lf\n",a);

   printf("power: %lf\n",b);

   printf("round: %d\n",c);

   printf("celi: %d\n",d);

   printf("floor: %d\n",e);

   printf("fabs: %lf\n",f);

   printf("log: %lf\n",a);

   printf("sin: %lf\n",a);

   printf("cos: %lf\n",a);

   printf("tan: %lf\n",a);



    return 0;
}
