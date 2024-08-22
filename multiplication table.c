/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,mul=0;
    printf("enter the integer :");
    scanf("%d",&n);
    printf("multiplication table of %d is :",n);
    for(i=1;i<=10;i++){
    if(i<=10){
      mul=n*i;  
    }
    printf("\n%d*%d=%d",n,i,mul);
    }

    return 0;
}
