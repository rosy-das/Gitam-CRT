/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2 !=0)
        {
            printf("%d",i);
        }
        i=i+1;
    }
    
    return 0;
}
