#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//program created function prototypes below
void function_1 (int[][8], int, int) ;
void function_2 (int[][8], int, int) ;
void function_3 (int[][8], int[], int, int) ;
void function_4 (int[][8], int[], int, int) ;

int main (void)
{
   //Local variables created
   int data [ 4 ] [ 8 ] = { 0 } ;
   int total_rows [ 4 ] = { 0 } ;
   int total_cols [ 8 ] = { 0 } ;
   int col = 8, row = 4 ;

   //Seed the random function based upon server time at execution
   srandom ( ( unsigned ) time( NULL ) ) ;

//1. Populate data array with random integers
   //between 1 and 9
   //program created function_1
   function_1(data, row, col);

//2. Display the contents of the data array in 2D
   //   table form
   //program created function_2
   function_2(data, row, col);

//3. Determine the total of each row and save
   //   each row's total to the total_rows array

//4. Display the total of each row by using the 
   //   total_rows array
   // Step 3 and 4 accomplished using 
   //program created function_3
   function_3(data, total_rows, row, col);

//5. Determine the total of each column and save
   //   each column's total to the total_cols array
//6. Display the total of each column in the 
   //   total_rows array
   // Step 5 and 6 accomplished using 
   //program created function_4
   function_4(data, total_cols, row, col);
   
   //7. Terminate
   return 0 ;
}

//Program created function definitions below                                                                                                 
void function_1(int data[][8], int r, int c)
{
   //local variables declared below
   int row = 0;
   int col = 0;
   for  (row = 0 ; row < r ; row = row + 1 )
   {
      for (col = 0 ; col < c ; col = col +1 )
      {
         data [ row ] [ col ] = (random( ) % 9) + 1  ;
      }
   }
   return;
}

void function_2(int data[][8], int r, int c)
{
   //local variables declared below
   int row = 0;
   int col = 0;
   for  (row = 0 ; row < r ; row = row + 1 )
   {
      printf("\n") ;
      for (col = 0 ; col < c ; col = col +1 )
      {
         printf(" %d " , data [ row ] [ col ] )  ;
      }
   }
   printf("\n\n") ; //Added for spacing of output

   return;
}

void function_3(int data[][8], int total_rows[], int r, int c)
{
   //local variables declared below
   int row = 0;
   int col = 0;

   for  (row = 0 ; row < r ; row = row + 1 )
   {
      for (col = 0 ; col < c ; col = col + 1 )
      { 
         total_rows [ row ] = total_rows[ row ] + 
                data[ row ] [ col ]  ;
      }
   } 
   for  (row = 0 ; row < r ; row = row + 1 )
   {
      printf("\n row %d total: %d" , row , total_rows [ row ] ) ;
   } 
   return ;
}

void function_4(int data[][8], int total_cols[], int r, int c)
{
   //local variables declared below
   int row = 0;
   int col = 0;

   for  (col = 0 ; col < c ; col = col + 1 )
   {
      for (row = 0 ; row < r ; row = row + 1 )
      { 
         total_cols [ col ] = total_cols[ col ] + 
                data [ row ] [ col ]  ;
      }
   } 
   printf("\n\n") ;

   for  (col = 0 ; col < c ; col = col + 1 )
   {
      printf("\n col %d total: %d" , col , total_cols [ col ] ) ;
   }
   printf("\n\n") ; //Added for spacing of output


}
