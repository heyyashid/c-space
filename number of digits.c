/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n,count=0;
  printf("enter the number :");
  scanf("%d",&n);
  
  while(n>0){
      count++;
      n=n/10;
  }
  printf("total digits is %d",count);

    return 0;
}
