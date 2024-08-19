/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void reverseString(char *str, int start, int end) {
    
    if (start >= end) {
        return;
    }

    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = 0;

   
    int length = strlen(str);


    reverseString(str, 0, length - 1);

   
    printf("Reversed string: %s\n", str);

    return 0;
}