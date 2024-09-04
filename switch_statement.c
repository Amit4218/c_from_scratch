#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
        Switch : A more efficent alternative to using many "else-if" statements
                allows a value to be tested for equality against many cases.

                Note* A break statement which is necessary to have in a switch. 

                There is also a "default" statement jsut like else statement.
    

        --------------- SYNTAX -----------------------

        switch(expression)
        {
            case  //constant-expression :
                 // code //
            break;
    
        default:
            break;
        }

        --------------------------------------------------
    
     */

    // --------------- EXAMPLE ----------------

    char grade;

    printf("Enter your grade (in caps): \n");
    scanf("%c",&grade);


    switch (grade)
    {
    case 'A':
        printf("well done!!\n");
        break;
    case 'B':
        printf("great!\n");
        break;
    case 'C':
        printf("could do better!\n");
        break;
    case 'D':
        printf("need some more effort! \n");
        break;
    case 'E':
        printf("Not fail at least!\n");
        break;
    case 'F':
        printf("Failed!\n");
        break;
    default:
        printf("enter a valid grade (try in caps)\n");
        break;
    }


    return 0;
}
