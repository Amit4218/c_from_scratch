#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    /*
    
        This is a practice progam where we will create a circle circumference calculator,
        and a circle area calculator .

        formula for finding out the circumference is  : ( circumference = 2 * PI  * radius ) 

        formula for finding out the area is : (area = PI * radius * radius) 
    
    */

   const float PI = 3.14159;
   double radius;
   double circumference;
   double area;

   printf("Enter the radius of the circle: ");
   scanf("%lf", &radius);

   float formula1 = circumference = 2 * PI  * radius ;

   float formula2 = area = PI * radius * radius ;

   printf("The circumference of the circle is: %lf\n",formula1);

   printf("The area of the circle is: %lf\n", formula2);




    return 0;
}
