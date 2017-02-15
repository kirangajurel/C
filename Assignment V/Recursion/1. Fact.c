//Write a program in C to find factorial of a given number using Recursive Function.
#include <stdio.h>

int fact(int);

int  main() {
   int n;
   printf("Enter a number to find its factorial : ");
   scanf("%d", &n);
   printf("Factorial of %d is %d\n", n, fact(n));
   return 0;
}

int fact(int i) {
	
   if(i <= 1) {
      return 1;
   }
   return i * fact(i - 1);
}
