/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n, i;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   int j,a=0;
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (arr[i] < arr[j]) 
                {
 
                    a =  arr[j];
                arr[j] = arr[i];
                    arr[i] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers arranged in descending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", arr[i]);
 
    }