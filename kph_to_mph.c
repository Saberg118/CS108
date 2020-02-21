/** 
    Alogorithm
    //1. Introduce the program to the user
    //2. Prompt the user for their speed in mph
    //3. Read the user's input
    //4. Calcute kph using the formula ("kph = mph * 1.60934)
    //5. Display the result to the user
    //6. Sign off with the user
    //7. Terminate program
**/

#include <stdio.h>
//prototypes declared below
float get_mph (void);
float mph_to_kph (float);
void display_result(float, float);

int main()
{
    //local variables declared below
    float mph = 0, kph = 0;
    //1. Introduce the program to the user
    printf("\nThis programs converts miles per hour to kilometers per hour.\n\n");

    //2. Prompt the user for their speed in mph
    //3. Read the user's input
    //   Steps 1 and 2 will be in a PCF named get_mph()
    mph = get_mph();
    
    //4. Calcute kph using the formula ("kph = mph * 1.60934)
    //   Step 4 will be in a PCF named mph_to_kph()
    kph = mph_to_kph(mph);

    //5. Display the result to the user
    display_result(mph, kph);

    //6. Sign off with the user
    printf("\nThank you for using this program\n\n");

    //7. Terminate Program
    return 0;
}

float get_mph ()
{   
    //local variables declared below
    float mph = 0;
    printf("Please enter the speed in miles per hour: ");
    scanf("%f", &mph);
    return mph;
}

float mph_to_kph (float mph)
{
    float kph = 0;
    kph = mph * 1.60934 ;
    return kph;
}

void display_result(float mph, float kph)
{
    printf("\nThe speed at %.2f miles per hour is %.2f kilometers per hour\n", mph, kph);
    return ;
}