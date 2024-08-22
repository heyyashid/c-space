/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int* a,int* b){
    
    
   int temp = *a ;
    *a = *b;
    *b = temp;
    
    
}

int main() {
    int a, b;

   
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    

   swap(&a,&b);

 
    printf("After swapping: a = %d, b = %d\n", a,b);

    return 0;
}

