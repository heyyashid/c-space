/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,p,r,t;
    printf("enter the initial principle :");
    scanf("%d",&p);
    printf("enter the annual intrest rate :");
    scanf("%d",&r);
    printf("enter the time in years");
    scanf("%d",&t);
    
    a= (p*r*t)/100;
    printf("the intrest amount is %d",a);

    return 0;
}
