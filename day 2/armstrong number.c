/******************************************************************************

                  armstrong number         

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,sum=0,num,l=0;
    printf("enter a number");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        l++;
        n=n/10;
    }
    n=num;
    while(n!=0)
    {
        i=n%10;
        sum=sum+pow(i,l);
        n=n/10;
    }
    printf("%d",sum);
    if(sum==num)
    printf("Armstrong number");
    else
    printf("not armstrong");
    return 0;
    
}
