#include<stdio.h>

int main(int argc, char const *argv[])
{
    // enum =   a user defined type of named interger identifiers 
                //helps us to make a program more readable

    // you and either declare an enum inside or outside an function.

    // NOTE: enum are NOT STRING, but they can be treated as int

    // to declare an enum you have to right, enum (give it a name) and close it with curlybraces and semicolon 

    // Example : enum days{sunday, monday, tuesday, wednesday};


    enum days {sunday, monday, tuesday, wednesday ,thursday, friday, saturday};

    int today = sunday;

    if (today == sunday)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }



    return 0;
}
