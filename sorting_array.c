#include<stdio.h>

// sorting an array

void arrysort(int arry[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arry[j] > arry[j+1])
            {
                int x = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = x ;
            }
            
        }
        
    }
    
}

// printing the output

void arryprint(int arry[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arry[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    /*

        here we will write different a function to sort an array. of integers.

        // we will have 3 function

        // 1. the main function =  we will declare array and call other function 
        // NOTE: in c the main funvtion run first.

        // 2. arrysort() function = to sort the array.

        // 3. arryprint() function = to print the output/ sorted array.
    
    */


   int arr [] = {5, 6, 424, 33, 54, 86, 9, 10 ,1};

   int size = sizeof(arr)/sizeof(arr[0]); 

    arrysort (arr, size); // calling the function
    
    arryprint (arr , size);  

    return 0;
}
