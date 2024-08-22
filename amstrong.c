/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int n,i,rm,ams=0,temp;
    printf("enter the number :");
    scanf("%d",&n);
    
    temp=n;
    
    while(n>0){
        rm=n%10;
        ams=ams+(rm*rm*rm);
         n=n/10;
    }
         if(temp==ams){
             printf("it is an amstrong number :");
         }else{
             printf("it is not an amstrong number");
         }
        
         
    
    

    return 0;
}
