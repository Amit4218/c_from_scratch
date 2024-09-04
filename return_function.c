#include<stdio.h>

// # *NOTE : here we are returning a double value so the function has double instead of void.
//           if we were returning a int it should be int then the function name and so on for the other datatypes.

double square(double x){

    return x * x; // returning the value

}

int main(int argc, char const *argv[])
{
   // return = return a value back to a calling function.


   double x = square(3.14); // calling the function and passing argument.
   printf("%lf\n",x);


    return 0;
}
