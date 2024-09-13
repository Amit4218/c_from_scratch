#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    // swaping an variable is very common when you are sorting an element.

    // -------------- Example ------------ //

    /*
    
        here if we do : a = y, and print it it will print a = y & b = y both element become same it did not swap.

         // here we can simply use a temprory varaible.
    */


    int a = 1;
    int b = 2;
    int c;

   c = a;
   a = b;
   b = c;

    // printing the swapped variable.

   printf("a = %d\n",a);
   printf("b = %d\n",b);

    // Note: but this won't work with strings.
    // to fix that we can use thr strcpy() function.



    // --------- Example ----------- //

    char x [15] = "hello";
    char y [15] = "world!";
    char z [15] ; // marking a temporary arry and giving it a max.

    strcpy(z, x);
    strcpy(x, y);
    strcpy(y, z);

    // printing swapped variable

    printf("a = %s\n",x);
    printf("b = %s\n",y);


    return 0;
}
