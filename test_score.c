#include<stdio.h>
int main (void)
{
   //variables declared below
   double test_score = 0.0;

   //1.Prompt the user to enter a test score.
   printf("\n\nPlease enter your test score: ");

   //2.Read the user's input for test score.
   scanf("%lf", &test_score);

   //3.Test the test score to see if it is less than 65
  //3a.Display results
  //3b.Go to step 8
  if (test_score < 65)
  {
     printf("\nYou have earned a F\n");
  }

  //4.Test the test score to see if it is greater than or equal to 65 but less than 70
 //4a.Display results
 //4b.Go to step 8
  else if (test_score >= 65 && test_score < 70)
  {
     printf("\nYou have earned a D\n");
  }

  //5.Test the thest score to see if it is greater than or equal to 70 but less than 80
 //5a.Display results
 //5b.Go to step 8
  else if (test_score >= 70 && test_score < 80)
  {
     printf("\nYou have earned a C\n");
  }

  //6.Test teh test score to see if it is greater than or equal to 80 but less than 90
  //6a.Display results
  //6b.Go to step 8
  else if (test_score >= 80 && test_score < 90)
  {
      printf("\nYou have earned a B\n");
  }
  //7.Display message indicating the grade earned is A
  else
  {
     printf("\nYou have earned an A\n");
  }

  //8.Terminate
   return 0;

}
