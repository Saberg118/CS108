#include<stdio.h>

int main ( void )
{
	float length = 0.0 , width = 0.0 , area = 0.0;

	//1. Greet the user (tell user the purpose of the program)
	printf("\nThis program calculates the area of a rectangle.\n");

	//2. Promt the user to enter the length of a rectangle
	printf("\nPlease enter the length of a rectangle:\n");

	//3. Read the user's input for length
	scanf("%f", &length );

	//4. Prompt the user to enter the width of a rectangle
	printf("\nPlease enter the width of a rectangle:\n");

	//5. Read the user's input for width
	scanf("%f", &width );

	//6. Calculate the area (formula: multiple length by width)
	area = length * width ;

	//7. Display the area
	printf("\nThe area of the rectangle is: %.2f\n", area);

	//8.Sign off with user

}
