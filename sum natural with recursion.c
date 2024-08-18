/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int nsum(int n){
       if(n==0){
           return 0;
       } else{
           return n+nsum(n-1);
           
       }
       
}
       
      
  

int main()
{
    int i,n;
   printf("enter the limit :");
   scanf("%d",&n);
   
   


   
   printf("sum : %d",nsum(n));
  
   
   return 0;
}
    

