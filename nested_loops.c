#include<stdio.h>

int main(int argc, char const *argv[])
{
    /*
    
        nested loops = basically its a loop inside another loop.

        // ---------- EXAMPLE ----------//

        for(int i = 0; i > 10; i++)
        {

            for(int j = 0; j > 10; j++)
            {
            
                print("hello\n");

            }
        
        }
    
    */


   // here we will make a function to print a rectangle

   int rows;
   int coloums;

   char symbol;

   printf("Enter num of rows: \n");
   scanf("%d", &rows);

   printf("Enter num of coloums: \n");
   scanf("%d", &coloums);

   printf("Enter a symbol: \n");
   scanf("%c", &symbol);

   for (int i = 0; i <= rows; i++)
   {
        for (int j = 0; i <= coloums; j++)
        {
            printf("%c",symbol);
        }
        
        printf(" ");
   }
   

    return 0;
}
