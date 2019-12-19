/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,count;
    printf("enter a number");
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        count++;
        n=n/10;
    }
    printf("Number of digits : %d",count);
    return 0;
}
