/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char ch;
    printf("enter");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("It is capital alphabet");
    }
    else if(ch>=97 && ch<=122)
    printf("it is small alphabet");
    else if(ch>=48 && ch<=57)
    printf("It is digit");
    else
    printf("It is special charecter");
    return 0;
}
