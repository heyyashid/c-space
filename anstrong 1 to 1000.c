/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>

int main()
{
    int n,m,rm,num;
    printf("enter the number from :");
    scanf("%d",&n);
    printf("enter the number to :");
    scanf("%d",&m);
    
    for (int i=n;i<=m;i++){
        num=i;
       int  ams=0;
       int  count=0;
        
        
        int temp=num;
         while (temp>0){
          temp =temp / 10;
          count++;
         }
         
         temp=num;
         while(temp>0){
         
        rm=temp % 10;
        ams=ams+pow (rm,3);
        temp=temp / 10;
         }
        
         if (i==ams){
             printf("%d ",i);
         }
        
         
    }
        
    
    

    return 0;
}
