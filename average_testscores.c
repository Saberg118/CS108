/*
Algorithm:
   Note 1: a 3D array of 5 pages/slices, 4 rows, and
   3 columns is created in main( )... the pages/
   slices represent students (each page/slice is
   a student), the rows represent courses (each
   student takes 4 courses), and the columns
   represent exams (each course has 3 exams)

   Note 2: a 1D array of 5 elements is created in
   main( )... each element of this array represents
   the average test score of each of the 5 students

   Note 3: the only 5 memory objects allowed in 
   main( ) are the 3D array, the 1D array, and 3
   individual integer variables

   Note 4: you may not use global variables

   1. In a programmer-created function (PCF) named
      populate( ), populate the 3D array with 
      random test scores between 50 and 100... use
      the srandom( ), the random( ), and the % to
      accomplish this task

   2. In a programer-create function (PCF) named
      display( ), print the the screen the contents 
      of the 3D array... your ouput should be 5 
      different 2D tables of rows(exams) and columns
      (test scores)

   3. In a programmer-created function (PCF) named
      determine_avg( ), determine each student's 
      average test score... remember, each of the
      five students has 12 test scores... record 
      the average test score for each student into 
      the 1D array

   4. In a programmer-created function (PCF) named
      display_avg( ), print to the screen each 
      student's average test score

   5. Terminate
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototypes declared below
void populate (int [] [4] [3], int, int, int) ;
void display (int [] [4] [3], int, int, int) ;
void determine_avg (int [][4][3], float [], int, int, int) ;
void display_avg (float [], int) ;

int main (void)
{
   //Local variables created... no other local
   //variable are allowed in the main( )
   int data [ 5 ][ 4 ][ 3 ] = { 0 } ;
   float avg [ 5 ] = { 0.0 } ;
   int students = 5 , courses = 4 , exam = 3 ;

    //1. program created function named populate ()
    //   populate a 3D array with random test scores 
    //   between 50 and 100 use the srandom( ), the random( ), 
    //   and the % to accomplish this task

    populate(data, students, courses, exam);

    //2. In a programer-create function (PCF) named
    //   display( ), print to the screen the contents 
    //   of the 3D array... your ouput should be 5 
    //   different 2D tables of rows(exams) and columns
    //   (test scores)
    display (data, students, courses, exam) ;

    //3. In a programmer-created function (PCF) named
    //   determine_avg( ), determine each student's 
    //   average test score... remember, each of the
    //   five students has 12 test scores... record 
    //   the average test score for each student into 
    //   the 1D array
   determine_avg (data, avg, students, courses, exam);

   //4. In a programmer-created function (PCF) named
   //   display_avg( ), print to the screen each 
   //   student's average test score
   display_avg (avg, students) ;
    
   //5. Terminate
    return 0;
}

void populate (int data [][4][3], int s, int c, int e)
{
    //local variables declared below
    int page = 0;
    int row = 0;
    int col = 0;

    srandom ( ( unsigned ) time( NULL ) ) ;

    for(page = 0; page < s; page ++)
    {
        for(row = 0; row < c; row ++)
        {
            for(col = 0; col < e; col ++)
            {
                data[page][row][col] = (random() % 51) + 50;
            }
        }
    }
    return ;
}

void display (int data [][4][3], int s, int c, int e)
{
    //local variables declared below
    int page = 0;
    int row = 0;
    int col = 0;

    for(page = 0; page < s; page ++)
    {
        printf("\n");
        printf("\n Student %d:\n ", page+1);

        for(row = 0; row < c; row ++)
        {
            printf("\n Course %d: ", row+1);
    
            for(col = 0; col < e; col ++)
            {
                printf(" %d " , data [ page ] [ row ] [ col ] )  ;
            }
        }
    }
    printf("\n\n");
    return ;
}

void determine_avg (int data [][4][3], float avg [], int s, int c , int e)
{
    //local variables declared below
    int page = 0;
    int row = 0;
    int col = 0;
    int sum = 0;
    int counter = 0;

    for(page = 0; page < s; page ++)
    {
        for(row = 0; row < c; row ++)
        {
            for(col = 0; col < e; col ++)
            {
                sum = sum + data [ page] [ row] [ col] ;
                counter ++ ;
            }
        }
        avg[page] = (float)sum/ counter ;
        sum = 0;
        counter = 0;
    }

    return ;
    
}

void display_avg (float avg [], int s)
{
    //local variables declared below
    int i = 0;

    for( i=0; i < s; i ++)
    printf("Student #%d average test score is: %.2f \n", i+1, avg[i]) ;
    printf("\n");

    return ;
}
