/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int digit,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        digit=n%10;
        printf("\n%d",digit);
        n=n/10;
    }
    

    return 0;
}
