#include<stdio.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    
    float temp;
    char unit;

    printf("Is the temperature in (F) or (C) ?");
    scanf("%c",&unit);

    unit = toupper(unit); // to change the input to uppercase incase the user inputs in lower.

    if (unit == 'F'){
        printf("Enter temps in celcius: ");
        scanf("%f",&temp);

        temp = ((temp - 32) * 5) / 9 ;

        printf("The temperature in celsius: %1.f\n",temp);
    }
    else if (unit == 'C'){
        printf("Enter temps in farenhit: ");
        scanf("%f",&temp);

        temp = (temp * 9 / 5) + 32;

        printf("The temperature in farenhit: %1.f\n",temp);
    }
    else{
        printf("INVALID INPUT %c",unit);
    }

    return 0;
}
