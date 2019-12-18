/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    printf("divisible by 5 and 11");
    else
    printf(" not divisible by 5 and 11");
    return 0;
}
