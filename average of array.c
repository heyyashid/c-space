/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0, average;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

   
    float arr[n];

    
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    
    average = sum / n;

   
    printf("Average = %.2f\n", average);

    return 0;
}