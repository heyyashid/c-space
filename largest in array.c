/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the number of elements :");
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
            printf("the largest element is %d",max);
        
    
    

    return 0;
}
