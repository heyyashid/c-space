/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr1[n];

    
    printf("Enter the elements of the first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    int arr2[n];

    
    for(i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    
    printf("Elements of the second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
