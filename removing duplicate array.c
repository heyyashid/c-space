/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 
    int n, i, j = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    int arr[n], temp[n];

    
    printf("Enter the elements ascending order :\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    temp[0] = arr[0];

    
    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            j++;
            temp[j] = arr[i];
        }
    }

    
    n = j + 1;

    
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }


    return 0;
}
