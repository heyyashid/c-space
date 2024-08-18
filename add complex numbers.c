/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



    typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex num1, num2, sum;

 
    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);

   
    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

   
    printf("The sum of the complex numbers is: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}
