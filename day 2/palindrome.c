/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,rev=0,num;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        i=n%10;
        rev=rev*10 + i;
        n=n/10;
    }
    if(rev==num)
    printf("it is palindrome");
    else
    printf("not palindrome");
    
    return 0;
}
