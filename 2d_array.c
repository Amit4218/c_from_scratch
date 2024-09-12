#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*

        2D array = an array where each element is an entire array 
                    useful if yu need a matrix, grid or a table of data
    
    */

   // ---------- Example code ----------//

   // here the first [] represents the number of array & the second [] represents the element inside.
   // the first [] cana be left without giving it a value, while the second [] seting a limit is needed.

    int number [][6] = {{10,11,43,35,3},{9,32,43,36,76}} ; 

    // to print the first element from the first array.

    printf("%d\n",number[0][0]); // here it will give me the first element of the first array. and so on.
    printf("%d\n",number[0][1]);
    printf("%d\n",number[0][2]);
    printf("%d\n",number[0][3]);
    printf("%d\n",number[0][4]);
    

    // you can use the same for printing the element of second array.

    printf("%d\n",number[1][0]); // here it will give me the first element of the second array. and so on.
    printf("%d\n",number[1][1]);
    printf("%d\n",number[1][2]);
    printf("%d\n",number[1][3]);
    printf("%d\n",number[1][4]);


// ------------ looping through an 2d array -----------//

int row = sizeof(number)/ sizeof(number[0]);
int columns = sizeof(number[0])/ sizeof(number[0][0]);

for (int i = 0; i < row; i++)
{
    for (int j = 0; j < columns; j++)
    {
        printf("%d\n",number[i][j]);
    }
    printf("\n");
}



    
    return 0;
}
