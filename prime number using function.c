/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int prime(int n){
    int i;
    int value=0;
    

 for(i=2;i<=n/2;i++){
        if(n%i==0){
            value=1;
            break;
        }
    }
    if(value==0){
        printf(" it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }
}

int main()
{
    int n,i,value=0;
    printf("enter the number :");
    scanf("%d",&n);
    
    prime(n);
    
    return 0;
}
    
    
  /*  for(i=2;i<=n/2;i++){
        if(n%i==0){
            value=1;
            break;
        }
    }
    if(value==0){
        printf(" it is a prime number");
    }
    else{
        printf("it is not a prime number");
    }


    return 0;
} */
