/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char s[]="hello world";
    char ch="o";
    int len;
    
    len=strlen(s);
    int i;
    for(i=0;i<=len;i++){
        if(i==ch){
            s;
        }
    }
    printf("%s",s);

    return 0;
}
