/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("%d is greatest",a);
        else
        printf("%d is greatest",c);
    }
    else
    {
        if(b>c)
        printf("%d is greatest",b);
        else
        printf("%d is greatest",c);
    }
    return 0;
}
