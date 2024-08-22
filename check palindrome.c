/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,rem,rev,temp;
    printf("enter the number :");
    scanf("%d",&n);
    temp=n;
    
    while (n>0){
        rem=n%10;
        rev=rev *10+rem;
         n=n/10;
        }
        if(rev==temp){
            printf("%d is a palindrome",temp);
        }else{
            printf("%d is not a palindrome",temp);
        }

    return 0;
}
