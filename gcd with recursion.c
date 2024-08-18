/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 int f,l;
int gcd(int f,int l){
    if(l!=0){
        return gcd(l,f%l);
    }
    else{
        return f;
    }
        
}

int main()
{
   
    printf("enter the first number :");
    scanf("%d",&f);
     printf("enter the second number :");
    scanf("%d",&l);
    
    
    printf("gcd of number is :%d",gcd(f,l));
    return 0;
}
