#include<stdio.h>
#include<string.h>


int main(int argc, char const *argv[])
{
    /// array of string is just like other array.

    char names [][15] = {"amit","ankit","thandup","umesh"};

    // but with string you can't replace elements ant index like other.
    // Example : with other types of array you would use names [0] = ballu; // this will through an error with string.

    // instead you can use the strcpy() function, remember to include the string.h header file.

    strcpy(names[0],"ballu"); // now the first element of names is ballu instead of amit.

    // you can also loop through it.

    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
    {
        printf("%s\n",names[i]);
    }
    





    return 0;
}
