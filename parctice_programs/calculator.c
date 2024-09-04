#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    char operators;
    double num1 , num2 , result;

    printf("Enter an operator ( + , - , * , / ):  ");
    scanf("%c", &operators);

    switch (operators)
    {
    case '+':
        printf("Enter num 1 : \n");
        scanf("%lf",&num1);

        printf("Enter num 2 : \n");
        scanf("%lf",&num2);

        result = num1 + num2;
        printf("Results: %.2lf\n",result);

        break;

    case '-':
       printf("Enter num 1 : \n");
        scanf("%lf",&num1);

        printf("Enter num 2 : \n");
        scanf("%lf",&num2);

        result = num1 - num2;
        printf("Results: %.2lf\n",result);

        break;

    case '*':
        printf("Enter num 1 : \n");
        scanf("%lf",&num1);

        printf("Enter num 2 : \n");
        scanf("%lf",&num2);

        result = num1 / num2;
        printf("Results: %.2lf\n",result);

        break;


    case '/':
        printf("Enter num 1 : \n");
        scanf("%lf",&num1);

        printf("Enter num 2 : \n");
        scanf("%lf",&num2);

        result = num1 / num2;
        printf("Results: %.2lf\n",result);

        break;

    default:
        printf("Invalid input !: %c\n",operators);
        break;
    }

    return 0;
}
