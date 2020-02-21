#include<stdio.h>

//Program created functions display below
int function_1 (void); 
int function_2(int) ;
void function_3(int, int);

int main( void )
{
    //Local variables created and initialized
    int input = 0, temp = 0 , temp2 = 0 , removed = 0 ;

    //1. & 2. Prompt the user an input and read the
    // read the user's input. Accomplished using 
    // program created function_1.
    input = function_1( );

    //3. Place the integer into a second storage 
    //   location (temp) 
    temp = input ;

    //4. Test to see if input is a pelidrome or not.
    // Accomplished using program created function_2.
    temp2 = function_2 ( temp );

    //5. Display result on whether or not integer
    //   is an pelidrome or not. Accomplished using 
    //   program created function_3.
    function_3(input, temp2);
 //6. Terminate
    return 0;
}

//Program created functions declarations are below
int function_1 (void)
{
    //local variable created and initialized
    int input = 0;

     //1. Ask the user to enter a multiple-place integer
    printf("\nPlease enter a multi-place integer:");

    //2. Record the user's input
    scanf("%d", &input);

    return input;

}
int function_2(int temp)
{
    //local variable created and initialized
    int temp2 = 0;
    int removed = 0;
    //4. Reverse the integer
    while (temp > 0)
    {   //   4a. Copy the last digit from temp 
        removed = temp % 10;
        //   4b. Place the copied last digit into a different 
        //       temporary location (temp2) after temp2 has been
        //       multiplied by 10 (this will shift the digits
        //       of temp2 one place to the left before adding
        //       the removed digit)
        temp2 = (temp2 * 10) + removed ;
        //   4c. Remove the last digit from temp
        temp = temp / 10 ;
        //   4d. Repeat steps 4a - 4c as long as temp  is greater
        //       than 0
    }
    return temp2;
}

void function_3(int temp, int temp2)
{
    //5. Test to see if temp2 is equal to input
    if(temp2 == temp)
    {
       //5a. If true, communicate that the input is a palindrome
       printf("\nYour input is a palindrome.\n\n");
    }
    else
    {
       //5b. If not true, communicate that the input is not a palindrome
       printf("\nYour input is not a palindrome.\n\n");
    }
    return;
}