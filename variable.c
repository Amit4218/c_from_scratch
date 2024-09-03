# include <stdio.h>

/*

variables = Allocated space in memory to store a value. We refer to a variable name to

            access the stored values. That variable now behaves as if it was the value it stored.

            BUT we need to declare what type of data type we are storing.

*/

/*


    Format Specifers 

    %d = to show integer variable

    %f = to show float point number

    %c = to show a single character

    %s = to show a string 

*/

int main()
{

    int x; // Declaration
    x = 123; // initialization

    int y = 321; // Declaration + initialization 


    int age = 21; // integer number

    float gpa = 7.0; // floating point number 

    char grade = 'c'; // single character 

    char name [] = "amit"; // arr of character

    printf("You are %d years old\n", age);   

    printf("Your collage gpa is :%f\n", gpa);

    printf("Your grade is : %c\n", grade);

    printf("Your name is : %s\n", name);

    
    return 0;


}

