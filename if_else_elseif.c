#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* 
    
        "if" statement = is used when we want to check a certain comparision.
        "else" statement = is executed when the if statement condition dosen't match.
        "else if" statement = its like if statement.

        -------------  SYNTAX -----------

        // USING IF AND ELSE.

        if(condition){

            what you want to do after the codition is true.
            EXP: printf("")
        }
        else{
            Do this // if the above condition is false this will run.
        }


        -------------  SYNTAX -----------

        // USING IF, ELSE IF, ELSE


        if(condition){
            what you want to do after the codition is true.
            EXP: printf("")
        }
        else if (condition){
            what you want to do after the codition is true.
            EXP: printf("")
        }
        else{
            Do this // if the above condition is false this will run.
        }

    printf("Enter your age: "
     */


    // -------------  EXAMPLE -----------

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("you can vote\n");
    }
    else if (age == 0){
        printf("you havent been born yet!\n");
    }
    else{
        printf("you cannot vote\n");
    }
    




    return 0;
}
