/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,x1=0,x2=1,x;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d\t%d\t",x1,x2);
    for(i=3;i<=n;i++)
    {
        x=x1+x2;
        printf("%d\t",x);
        x1=x2;
        x2=x;
    }
}
