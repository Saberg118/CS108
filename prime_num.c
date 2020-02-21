/*
Algorithm:
1. Ask user to enter an intger befween 2 and 100,000
2. Record user's input
3. Test if the user's input is between 2 and 100,000 inclusive
   a. If true
      1. Copy user's input to test_prime_index (tpi)
      2. Communicate that the following numbers are the
         next 10 prime numbers
      3. Test if number of primes is less than or equal to 10
         a. If true, test each integer from 2 to one less than
            the test_prime_index looking for a an integer that
            produces no remainder when divided into the
            test_prime_index.
         b. If an integer is found that produces no remainder,
            set the prime_flag to 0 and immediately stop testing
         c. Test if the prime_flag is one
            1. If true,
               a. Store integer value in array
               b. Increment the number of primes
         d. Increment test_prime_index
         e. Reset the prime flag to 1
         f. Go to step 3.a.3
   b. If false, go to step 6
4. Communicate to the user that the next 10 prime numbers are.
5. Display contents of in assending order
  (smallest to largest)
6. Communicate to the user that the next 10 prime numbers are.
7. Display all contents in reverse-order
  (largest to smallest)
8. Terminate
*/


#include<stdio.h>

int main (void)
{
   //Local variables
   int input = 0 , tpi = 0 , index = 0 , i=0, prime_flag = 1 ;
   int num_primes = 1 ;
   int prime[10];

   //1. Ask user to enter an intger befween 2 and 100,000
   printf("\nPlease enter an integer between 2 and 100,000: ") ;  

   //2. Record user's input
   scanf( "%d" , &input ) ;

   //3. Test if the user's input is between 2 and 100,000 inclusive
   if(input >=2 && input <=100000  )
   {
      //a. If true
         //1. Copy user's input to test_prime_index (tpi)
         tpi = input ;

         //4. Test if number of primes is less than or equal to 10
         while ( num_primes <= 10 )
         {
            //a. If true, test each integer from 2 to one less than
            //   the test_prime_index looking for a an integer that
            //   produces no remainder when divided into the 
            //   test_prime_index.  
            //b. If an integer is found that produces no remainder,
            //   set the prime_flag to 0 and immediately stop testing
            for ( index = 2 ; index < tpi ; index++ )
            {
               if ( tpi % index == 0 )
               {
                  prime_flag = 0 ;
                  break ;
               }

            }

            //c. Test if the prime_flag is one
            //   1. If true, 
            //      a. Store prime into an array
            //      b. Increment the number of primes 
            if ( prime_flag == 1 )
            {
               prime[num_primes-1] = tpi;
               num_primes++  ;
               
            }

            //d. Increment test_prime_index
            //e. Reset the prime flag to 1
            //f. Go to step 3.a.3 
            tpi++ ;
            prime_flag = 1 ;
         }

   //b. If false, go to step 8
   }

   // extra line feed for spacing
   printf("\n");

   //5. Communicate to the user the next 10
   //   prime nummber are.
   printf("The next 10 prime numbers from"); 
   printf(" small to large are:");
   
   //6. Displays all contents in asscending order 
   //   (smallest to large).
   for(index = 0; index < 10; index ++)
   {
      printf("\n%d", prime[index]);
   }
     
   //extra linefeed for spacing
   printf("\n\n");

   //7. Communicate to the user the next 10
   //   prime nummber are.
   printf("The next 10 prime numbers from");
   printf(" large to small are:"); 

   //6. Displays all contents in reverse-order 
   //   (largest to smallest)
   for(index= 9; index >= 0; index --)
   {
      printf("\n%d", prime[index]);
   }
   //An extra linefeed for spacing
   printf("\n" ) ;

   //8. Terminate
   return 0 ;
}
