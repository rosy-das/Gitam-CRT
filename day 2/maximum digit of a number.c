/******************************************************************************

                  armstrong number         

*******************************************************************************/

#include <stdio.h>
#include<math.h>
int main()
{
    int i,n,r,max=0;
    printf("enter a number");
    scanf("%d",&n);
    do
    {
        r=n%10;
        if(r>max)
        max=r;
        n=n/10;
    }while(n!=0);
    printf("%d",max);
    return 0;
    
}
