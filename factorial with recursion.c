/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n;
int  factorial(int n){
    
    if(n==0){
        return 1;
    }else {
        return n*factorial(n-1);
        
    }
    
}

int main()
{
    
   printf("enter the number :");
   scanf("%d",&n);
   
  
  printf("factorial of %d is %d",n,factorial(n));

    return 0;
}
