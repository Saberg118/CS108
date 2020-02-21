/* Alogrithm to find if the number inputted by the user
 is a multiple of both 19 and 3

  1.Prompt the user to enter an integer.

  2.Read the user's input for the integer.

  3.Test that  the input is a multiple of 19.
    (formula: divide input by 19 and produces no remainder.)
    And
    Test that the input is a multiple of 3.
    (formula: divide input by 3 and produces no remainder.)
	3a.Display the message that the input is a multiple
	 of both 19 and 3.
	3b.Go to step 5.

  4.The input is not a multiple of both 19 and 3.
  	4a.Display the message that the input is not a
	 multiple of both 19 and 3.
	4b.Go to step 5.

  5.Terminate Program. 

*/



	//Program written using the alogrithm above


	#include<stdio.h> //printf and scanf defintions
	int main ( void )
	{ //MARKS THE BEGINNING OF THE main( ) BLOCK OF STATEMENTS

                //variable declared below
    		int number = 0;

            printf("This programs test to see if a number is a multiple of 19 and 3\n");

                //1.Prompt the user to enter an integer.
   		printf("Please enter an integer: ");

		//2.Reader the user's input for the integer.
   		scanf("%d", &number);

		//3.Test that the input is a multiple of both 19 and 3.
			//3a.Display the message that the input is a
			// multiple of both 19 and 3.
			//3b.Go to step 5.

   		if((number % 19 == 0) && (number % 3 == 0)) 
		//number is divisible by both 19 and 3 if there 
		//is no remainder left.
   		{//MARKS THE BEGINNING OF THE if( ) BLOCK OF STATEMENTS

        	   printf("\n%d is a multiple of both 19 and 3\n", number);
		   // Displays message to user that the integer is a
		  // multiple of both 19 and 3.

   		}//MARKS THE END OF  THE if () BLOCK OF STATEMENTS 

		//4.Test that the integer is not a multiple of both 19 and 3.
			//4a.Display message that the input is not a
			// multiple of both 19 and 3.
			//4b.Go to step 5
   		else //the if statement evaluated as false
   		{//MARKS THE BEGINNING OF THE else BLOCK OF STATEMENTS

      		   printf("\nSorry, %d is not a multiple"
			  " of both 19 and 3\n", number);
		//Displays message to user that hte integer is not 
		//a mulitple of both 19 and 3.

   		}//MARKS THE END OF THE else BLOCK OF STATEMENTS

        printf("\n");
		//5.Terminate the program
  		return 0;

		}//MARKS THE END OF THE main( ) BLOCK OF STATEMENTS