#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    

    char question [] [100] = {"1. Who is hero ?",
                              "2. Who is hero ?",
                              "3. Who is hero ?"};

    char option[] [100] = {"A. idk","B. you?","C. jo bham hos","D. none of the above",
                           "A. idk","B. you?","C. jo bham hos","D. none of the above",
                           "A. idk","B. you?","C. jo bham hos","D. none of the above",} ;


    char answers [3] = {"A","B","C"};

    char guess;

    int score;

    int size = sizeof(question) / sizeof(question[0]);

    for (int i = 0; i < size; i++)
    {
        printf("------------------------\n");
        printf("%s\n",question[i]);
        printf("------------------------\n");


        for (int j = i *4; j < i*4; j++)
        {
            printf("%s\n",option);
        }

        printf("Enter your guess: ");
        scanf("%c",guess);
        scanf("%c"); // removes \n from buffering
        
        if (guess == answers[i])
        {
            printf("Correct !\n");
            score++ ;
        }
        else
        {
            printf("Wrong !\n");
        }
        
        printf("Results: %d/%d",score,size) ;



    }
    

    return 0;
}
