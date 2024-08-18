/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int  reverse(int arr[],int n){
    int i;
 printf("the revered array is:");
     
    for(i=n-1;i>=0;i--){
        printf(" %d",arr[i]);
    
     }
}




int main()
{
    int n,i;
    
    printf("enter the no of elements :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
   
     
      return 0;
}
