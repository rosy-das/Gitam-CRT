/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter year");
    scanf("%d",&n);
    if(n%4==0 || n%400==0)
    printf("It is a leap year");
    else
    printf("it is not a leap year");
    return 0;
}
