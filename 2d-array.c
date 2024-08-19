/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){      
int i=0,j=0;    
int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};     
   
for(i=0;i<4;i++){    
 for(j=0;j<3;j++){    
   printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);    
 }
}  
return 0;  
}  