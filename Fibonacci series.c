/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i;
    int n1=0,n2=1,n3;
    
    printf("enter the number :");
    scanf("%d",&n);
    printf("%d %d",n1,n2);
    
    for(i=2;i<n;i++){
        n3=n1+n2;
        printf(" %d",n3);
        n1=n2;
        n2=n3;
        
        
    }

    return 0;
}
