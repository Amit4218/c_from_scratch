#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
        // array = is a data structure that can store many values of the same data type.



        // there are many ways you can intilize an array.

        // To create an array you can 

        give it a datatype *name of the array [] = {give it values inside curly braces & seperate it using commas','}

        Example 1 : double prices [] = {5.0 , 10.0. , 15.5} ;

        you can also do it like.

        Example 2 : double prices[20]; // but you will have to provide the size of the array.

        // -------------- assigining in an undeclared array ----------// 

        prices[0] = 10.7;
        prices[1] = 18.9;  // this means this is the value of index 1 in the array.

        //----------------------------------------//



        // ----------- Printing an array ---------//

        // NOTE: array index always starts with 0.

        // So to print the first element of the array will be.

        printf("%lf", prices[0]) // this will give us the first element of the array.

        //----------------------------------------//

        //------------- looping through an array --------//

        // we can also loop through an array, to loop through an array we will use sizeof() function.

        // # sizeof() = returns the size of the array in bytes.

        // you can also use the len() fun.

       
    
     */



    double prices [] = {5.0 , 10.0 , 15.5, 9.0 , 55.0 , 23.0 , 65.56} ;

    // printf("%.2lf", prices[0]);


    // looping Example 

    for (int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
    {
        printf("%.2lf\n", prices[i]);
    }
    

    return 0;
}
