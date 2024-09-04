# include <stdio.h>

int maximum(int x ,int y){

    return (x > y) ? x : y ; // using ternary operator
}



int main(int argc, char const *argv[])
{

    // ternary operator = shortcut to if and else when assigning/returniing a value.
    // syntax :  (conditio) ? if true : if false.
    
    int max = maximum(3 ,4);

    printf("%d",max);

    return 0;
}
