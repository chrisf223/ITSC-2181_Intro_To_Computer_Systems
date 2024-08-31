/*
 This program shows an example of a function 
 calling itself in a recursive manner. 
 
 This program calculates a fibonacci number.
 See https://en.wikipedia.org/wiki/Fibonacci_sequence

 Note that this version only works well 
 for small numbers.
 
 */

#include <stdio.h>

int fib (int n);

int main(void)
{
   int number = 0;

   printf("n = %d\n", number); 
   printf("f(n) = %d\n", fib(number));

   return 0;
}


int fib (int n) 
{
   if (n < 2 )
      return n;
   else
      return (fib(n-1) + fib(n-2));

}
