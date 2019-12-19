/******************************************************************************

                  armstrong number         

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,n,sum=0,num;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        i=n%10;
        sum=sum+i*i*i;
        n=n/10;
    }
    if(sum==num)
    printf("Armstrong number");
    else
    printf("not armstrong");
    return 0;
    
}
