#include <stdio.h>
int main( void ) 
{
    char C[3][4] = {    {'k','l','a','W'}, 
                        {'s','i','h','t'}, 
                        {'!','y','a','w'}
                    };

int row = 0 , col = 0 ;

for (row = 0 ; row <  3; row++)
    {
        printf("\n");

        for(col = 4-1; col >= 0; col--)
        {
            printf(" %c ", C[row][col]);
        }
    }

    printf("\n\n");

    return 0;


}


    