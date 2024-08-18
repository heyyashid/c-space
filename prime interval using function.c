/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int interval(int low,int high){
    
   int  i,flag;
     while (low < high) {
      flag = 0;

      
      if (low <= 1) {
         ++low;
         continue;
      }

    
      for (i = 2; i <= low / 2; ++i) {

 if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      if (flag == 0)
         printf("%d ", low);

     
      ++low;
   }

}

int main()
{
    
    int low,high;
   printf("Enter first number: ");
   scanf("%d",&low);
   printf("enter the limit :");
   scanf("%d",&high);
   printf("Prime numbers between %d and %d are: ", low, high);
   
   interval(low,high);
   
   
    return 0;
}
