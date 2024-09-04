#include <stdio.h>

int main() {

    /*
        Logical AND (&&):

        a < b evaluates to true because 5 < 10.
        b < c evaluates to true because 10 < 15.
        Since both conditions are true, the && operator results in true, so "Logical AND: Both conditions are true." is printed.


        Logical OR (||):

        a > b evaluates to false because 5 > 10 is not true.
        b < c evaluates to true because 10 < 15 is true.
        Since at least one condition is true, the || operator results in true, so "Logical OR: At least one condition is true." is printed.


        Logical NOT (!):

        a > b evaluates to false because 5 > 10 is not true.
        Applying ! to false gives true, so "Logical NOT: a is not greater than b." is printed.

    */

   
    int a = 5;
    int b = 10;
    int c = 15;
    
    // Logical AND (&&)
    if (a < b && b < c) {
        printf("Logical AND: Both conditions are true.\n");
    } else {
        printf("Logical AND: One or both conditions are false.\n");
    }
    
    // Logical OR (||)
    if (a > b || b < c) {
        printf("Logical OR: At least one condition is true.\n");
    } else {
        printf("Logical OR: Both conditions are false.\n");
    }
    
    // Logical NOT (!)
    if (!(a > b)) {
        printf("Logical NOT: a is not greater than b.\n");
    } else {
        printf("Logical NOT: a is greater than b.\n");
    }

    return 0;
}
